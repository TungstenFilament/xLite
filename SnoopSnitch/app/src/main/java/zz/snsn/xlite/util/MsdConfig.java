package zz.snsn.xlite.util;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Environment;
import android.util.Log;

import android.telephony.TelephonyManager;

import java.io.File;
import java.util.Locale;

import zz.snsn.xlite.qdmon.MsdSQLiteOpenHelper;

import android.database.DatabaseUtils;

//import android.util.Log;
//import android.preference.PreferenceManager;


/**
 * This class contains a set of static methods for accessing the App configuration.
 * 
 */
public class MsdConfig {

	private static final String TAG = "SNSN";
	private static final String mTAG = "MsdConfig: ";

    //private TelephonyManager mTM;
    //private MsdSQLiteOpenHelper helper;
    //public TelephonyManager mTM;
    //public MsdSQLiteOpenHelper helper;

	private static SharedPreferences sharedPrefs(Context context) {
        // ToDo: Need better multi-process fix here. Consider:
        //       https://github.com/DozenWang/DPreference
        //       https://github.com/grandcentrix/tray
        //       https://github.com/kcochibili/TinyDB--Android-Shared-Preferences-Turbo
		//Deprecated: return context.getSharedPreferences("de.srlabs.snoopsnitch_preferences", Context.MODE_PRIVATE | Context.MODE_MULTI_PROCESS);
        return context.getSharedPreferences("zz.snsn.xlite_preferences", Context.MODE_PRIVATE);
	}

	// ========================================================================
	// Device Compatibility
	// ========================================================================
    // Device compatibility is set in:
    //   (a) ActiveTestService.java:257     setDeviceIncompatible         -- MAYBE incompatible
    //   (b) MsdService.java:1052           setDeviceCompatibleDetected   -- once compatible, always compatible!)

    // The following marks a device as permanently diag compatible. Meaning that
    // the app has received diag messages at one point. (Thus it should not be marked as
    // incompatible again)
	public static boolean getDeviceCompatibleDetected(Context context) {
		return sharedPrefs(context).getBoolean("device_compatible_detected", false);
	}

	public static void setDeviceCompatibleDetected(Context context, boolean compatible) {
		Editor editor = sharedPrefs(context).edit();
		editor.putBoolean("device_compatible_detected", compatible);
		editor.commit();
	}

	// ToDo: Author should add a Redmine issue request with the specific functionality intended or remove. (Emi: 2017-01-09)
	// The version suffix should be counted up when there is a solution for the
	// "No baseband messages" problem (so that phones detected to be
	// incompatible with a previous version can used again)
	private static final String DEVICE_INCOMPATIBLE_DETECTED_FLAG = "device_incompatible_detected_2";

	public static boolean getDeviceIncompatible(Context context) {
		return sharedPrefs(context).getBoolean(DEVICE_INCOMPATIBLE_DETECTED_FLAG, false);
	}

	public static void setDeviceIncompatible(Context context, boolean incompatible) {
		Editor editor = sharedPrefs(context).edit();
		editor.putBoolean(DEVICE_INCOMPATIBLE_DETECTED_FLAG, incompatible);
		editor.commit();
	}

	// ========================================================================
	// Settings: Logfiles & data cleanup interval
	// ========================================================================
	public static int getBasebandLogKeepDurationHours(Context context) {
		return 24*Integer.parseInt(sharedPrefs(context).getString("settings_basebandLogKeepDuration", "1"));
	}

	public static int getDebugLogKeepDurationHours(Context context)	{
		return 24*Integer.parseInt(sharedPrefs(context).getString("settings_debugLogKeepDuration", "1"));
	}

	public static int getMetadataKeepDurationHours(Context context) {
		return 24*Integer.parseInt(sharedPrefs(context).getString("settings_basebandMetadataKeepDuration", "1"));
	}
	
	public static int getLocationLogKeepDurationHours(Context context) {
		return 24*Integer.parseInt(sharedPrefs(context).getString("settings_locationLogKeepDuration", "1"));
	}

	public static int getAnalysisInfoKeepDurationHours(Context context) {
		return 24*Integer.parseInt(sharedPrefs(context).getString("settings_analysisInfoKeepDuration", "30"));
	}

	// ========================================================================
	// Settings: privacy
	// ========================================================================
	public static boolean gpsRecordingEnabled(Context context) {
        return sharedPrefs(context).getBoolean("settings_gpsRecording", false);
	}

	public static boolean networkLocationRecordingEnabled(Context context) {
		return sharedPrefs(context).getBoolean("settings_networkLocationRecording", true);
	}

	public static boolean recordUnencryptedLogfiles(Context context) {
		return sharedPrefs(context).getBoolean("settings_recordUnencryptedLogfiles", false);
	}

	public static boolean recordUnencryptedDumpfiles(Context context) {
		return sharedPrefs(context).getBoolean("settings_recordUnencryptedDumpfiles", false);
	}

	public static boolean dumpUnencryptedEvents(Context context) {
		return sharedPrefs(context).getBoolean("settings_dumpUnencryptedEvents", false);
	}
	
	public static String getAppId(Context context) {
        return sharedPrefs(context).getString("settings_appId", "");
	}

	public static void setAppId(Context context, String appID) {
		Editor editor = sharedPrefs(context).edit();
		editor.putString("settings_appId", appID);
		editor.commit();
	}

	public static boolean getActiveTestForceOffline(Context context) {
		return sharedPrefs(context).getBoolean("settings_active_test_force_offline", false);
	}


	// ========================================================================
	// Own phone number Sanity check
	// ========================================================================

    /**
	 * We can check these:
	 *   1. [ ] That the number starts with a valid country code (e.g. "+49" )
	 *   2. [ ] We can attempt to get own number from various hacks, but not SIM nor API
	 *
	 *   For (2) we can cross check SIM country iso with one of the following:
	 *   	[ ] asset CSV file  					- less coding
	 *   	[ ] asset JSON file 					- more coding but better portability (?)
	 *      [x] our own DB table "mcc" in msd.db 	- may break multi-threading!
	 *
     *   To get the call_code from mcc, we need both mcc and iso, since US dialling codes
     *   are different for the islands:  Bermuda (BU), Guam (GU) and mainland (US).
	 *
	 *
     *
	 * @param db
	 * @param countryIso
     */
	public static String getCountryCode(Context context) {

        TelephonyManager mTM = (TelephonyManager) context.getSystemService(Context.TELEPHONY_SERVICE);
        MsdSQLiteOpenHelper helper;

		String sql;
		String country_code = null;

        //String phone_number = mTM.getLine1Number();        // Rarely works: The phone number
        //String networkOperator = mTM.getNetworkOperator(); // The currently connected MCC/MNC
        String IMSI = mTM.getSubscriberId();                 // The IMSI for a GSM phone
        String simOp = mTM.getSimOperator();                 // The SIM's MCC/MNC
        String simIso = mTM.getSimCountryIso().toUpperCase(Locale.US); // The SIM country ISO code [2-chars]
        Log.d(TAG, ": getSubscriberId: " + IMSI + " , getSimOperator: " + simOp + " , getSimCountryIso: " + simIso);

        if(simOp.length() < 5){
            Log.w(TAG, mTAG + "Invalid SIM Operator: " + simOp);
            return null;
        }
        String mcc = simOp.substring(0,3);
        sql = "SELECT call_code FROM mcc WHERE mcc=" + mcc + " AND iso=\"" + simIso + "\";";

        helper = new MsdSQLiteOpenHelper(context);
        SQLiteDatabase db = helper.getReadableDatabase();
        Log.i(TAG, ": Trying SQL: " + sql );

        try {
            //db.rawQuery(sql, null).close();
            //db.close();
            //helper.close();
			db.beginTransaction();
            country_code = DatabaseUtils.stringForQuery(db, sql, null);
			db.setTransactionSuccessful();
		} catch (Exception ee) {
			Log.e(TAG, mTAG + "getCountryCode(): Exception from SQL execution:", ee);
		} finally {
			db.endTransaction();
		}
		return country_code;
	}

	/**
	 * Get own phone number or if not possible, at least the dialling country code
	 *
	 * NOTE: The AOS API can't provide for getting the number as it is not something
	 * 		 stored on the SIM, nor on the phone. The best we can do is getting the
	 * 		 country ISO code from the API and then cross reference it with either
	 * 		 a provided CSV, JSON or from our SQL table "mcc".
	 *
	 * @param context
	 * @return
     */
	public static String getOwnNumber(Context context) {
		// ToDo: Need smarter way to get number here!
		//
		String phone_number = sharedPrefs(context).getString("own_number", "");
		if (phone_number.equals(null)) {

			// Try to get MSISDN etc
			/**
			 *  try to use:     getSimCountryIsoForPhone
			 *  				getSimOperatorNumeric
			 *                  getLine1Number
			 * 					getLine1NumberForSubscriber
			 *					getMsisdn
			 *
			 */

			//TelephonyManager tm = (TelephonyManager)getSystemService(Context.TELEPHONY_SERVICE);
			//phone_number = tm.getLine1Number();
			// still nothing?
			/*if (phone_number.equals(null)) {
				//
			}*/
			// Toast?
		}
		return phone_number;
	}

	public static void setOwnNumber(Context context, String ownNumber) {
		sharedPrefs(context).edit().putString("own_number", ownNumber).commit();
	}

	// ========================================================================

	public static boolean getActiveTestSMSMODisabled(Context context) {
		return sharedPrefs(context).getBoolean("settings_active_test_sms_mo_disabled", false);
	}

	public static String getActiveTestSMSMONumber(Context context) {
		return sharedPrefs(context).getString("settings_active_test_sms_mo_number", "*4*");
	}

	public static long getDataJSLastCheckTime(Context context) {
			return sharedPrefs(context).getLong("data_js_last_check_time", 0);
	}

	public static void setDataJSLastCheckTime(Context context, Long timeInMillis) {
		Editor editor = sharedPrefs(context).edit();
		editor.putLong("data_js_last_check_time", timeInMillis);
		editor.commit();
	}

	public static String getDataJSLastModifiedHeader(Context context) {
		return sharedPrefs(context).getString("data_js_last_modified_header", null);
	}

	public static void setDataJSLastModifiedHeader(Context context, String header) {
		Editor editor = sharedPrefs(context).edit();
		editor.putString("data_js_last_modified_header", header);
		editor.commit();
	}

	public static int getActiveTestNumIterations(Context context) {
		// We set the (non-returned) default to:  1 iteration
		// Fixme: The true default is in settings.xml, but app has some bugs applying settings...
		return Integer.parseInt(sharedPrefs(context).getString("settings_active_test_num_iterations", "1"));
	}
	
	public static boolean getParserLogging(Context context) {
        return sharedPrefs(context).getBoolean("settings_parser_logging", false);
	}

	public static boolean getDumpAnalysisStackTraces(Context context) {
		return sharedPrefs(context).getBoolean("settings_debugging_dump_analysis_stacktraces", false);
	}

	public static boolean getActiveTestDisableUpload(Context context) {
		return sharedPrefs(context).getBoolean("settings_active_test_disable_upload", false);
	}

	public static boolean getCrash(Context context)	{
		return sharedPrefs(context).getBoolean("settings_crash", false);
	}

	public static void setCrash(Context context, boolean crash) {
		Editor edit = sharedPrefs(context).edit();
		edit.putBoolean("settings_crash", crash);
		edit.commit();
	}

	public static long getLastCleanupTime(Context context) {
		return sharedPrefs(context).getLong("last_cleanup_time", 0);
	}

	public static void setLastCleanupTime(SharedPreferences pref, long time) {
		Editor edit = pref.edit();
		edit.putLong("last_cleanup_time", time);
		edit.commit();
	}

	public static void setLastCleanupTime(Context context, long time) {
		setLastCleanupTime(sharedPrefs(context), time);
	}

	public static boolean getFirstRun(Context context) {
		return sharedPrefs(context).getBoolean("app_first_run", true);
	}

	public static void setFirstRun(Context context, boolean firstRun) {
		Editor edit = sharedPrefs(context).edit();
		edit.putBoolean("app_first_run", firstRun);
		edit.commit();
	}

	public static boolean getStartOnBoot(Context context) {
        return sharedPrefs(context).getBoolean("settings_start_on_boot", false);
	}

	public static void setStartOnBoot(Context context, boolean startOnBoot) {
		Editor edit = sharedPrefs(context).edit();
		edit.putBoolean("settings_start_on_boot", startOnBoot);
		edit.commit();
	}

    public static boolean getAutoUploadMode(Context context){
		return sharedPrefs(context).getBoolean("settings_auto_upload_mode", false);
	}

    public static boolean getUploadDailyPing(Context context){
		return sharedPrefs(context).getBoolean("settings_upload_daily_ping", false);
	}

    public static boolean getPcapRecordingEnabled(Context context){
		return sharedPrefs(context).getBoolean("settings_enable_pcap_recording", false);
	}

	/**
	 * This is used in MsdService.launchParser() as:
	 *
	 * 		String pcapBaseFileName = MsdConfig.getPcapFilenamePrefix(this);
	 * .	String filename = pcapBaseFileName + "_" + String.format(Locale.US, ....) + ".pcap";
	 *
	 * 		The default storage location is/was: 		/sdcard/snoopsnitch/
	 * 		The default storage location should be: 	/.../pcaps/
	 * 		The default strings for this are in: 		strings.xml
	 *  	The default preference for this are in: 	preferences.xml
     *
     *  After installation, we have app related files in:
     *
     *      /data/user/0/zz.snsn.xlite/files
     *      /data/data/zz.snsn.xlite/files/
     *      /data/app/zz.snsn.xlite-1/
     *
     * 	New options:
     *
     *      getExternalStorageDirectory : requires WRITE_EXTERNAL_STORAGE permission
     *      getExternalFilesDir(String) : requires no permissions
     *      getExternalCacheDir()       : requires no permissions
     *      getExternalMediaDirs()      : requires no permissions
     *      getDataDirectory            : ?
	 *
	 * @param context
	 * @return
     */
    public static String getPcapFilenamePrefix(Context context) {
		// return sharedPrefs(context).getString("settings_pcap_filename_prefix", "/sdcard/snoopsnitch");
        return sharedPrefs(context).getString("settings_pcap_filename_prefix", "snoopsnitch");
	}

    public static String getPcapFilenamePath(Context context) {

        // First check if we have already created a directory:
        //String prefPath = sharedPrefs(context).getString("settings_pcap_file_path",
        //Environment.getDataDirectory().getPath() + "/snoopsnitch_pcap/");
        String prefPath = sharedPrefs(context).getString("settings_pcap_file_path", null);

        //File dumbfile = new File(context.getExternalFilesDir(null), filename);
        //File dumbfile = new File(context.getFilesDir(), filename);
        //File dummydir = new mkdir(pcapDir);

        String filename = "dummy.txt";  // Dummy file to test write-ability to directory
        String pcapDirName  = "pcaps";  // PCAP directory name (from default or settings)
        File pcapPath;                  // Path to (created) PCAP directory

        try {
            File appDir = context.getFilesDir();            //  /data/user/0/zz.snsn.xlite/files
            File pcapDir = new File(appDir, pcapDirName);   //  /data/user/0/zz.snsn.xlite/files/pcaps
            // check if we have already created a directory:
            if( pcapDir.exists() ) {
                Log.i(TAG, "PCAP: path ok: " + pcapDir.toString());
            } else {
                Log.i(TAG, "PCAP: pcapDir not found. Creating: " + pcapDir.toString());
                // getDir() creates directory if it doesn't already exists. But,
                // it seem that it adds an "app_" prefix to it in AOS 6.0+
                //pcapPath = context.getDir(pcapDir,0);     // 0 = MODE_PRIVATE
                if(!pcapDir.mkdir()) { //  /data/user/0/zz.snsn.xlite/pcaps
                    Log.e(TAG, "PCAP: Failed to create pcapDir!");
                }
            }
            File outFile = new File(pcapDir, filename);
        } catch (SecurityException e) {
            Log.e(TAG, "PCAP: filename path security exception: " + e);
        }

        //if (Build.VERSION.SDK_INT >= 21) {
            // Fixme: This is an array!
            //Log.i(TAG, "PCAP: getExternalMediaDirs: " + context.getExternalMediaDirs());    // API 21+
        //}

        String dumbpath = "";
        String state = Environment.getExternalStorageState();
        if (Environment.MEDIA_MOUNTED.equals(state)) {
            Log.i(TAG, "PCAP: ExternalStorage is available.");
            // We can read and write the media
            File dumbfile = new File(context.getExternalFilesDir(null), filename);
            dumbpath = dumbfile.getAbsolutePath();
        }

        Log.i(TAG, "PCAP: getExternalStorageDirectory: " + Environment.getExternalStorageDirectory().getPath()); // /storage/emulated/0/
        Log.i(TAG, "PCAP: getExternalFilesDir: "  + dumbpath);                                  //  /storage/emulated/0/Android/data/zz.snsn.xlite/files/dummy.txt
        Log.i(TAG, "PCAP: getExternalCacheDir: "  + context.getExternalCacheDir());             //  /storage/emulated/0/Android/data/zz.snsn.xlite/cache
        Log.i(TAG, "PCAP: getDataDirectory: "     + Environment.getDataDirectory().getPath());  //  /data/
        Log.i(TAG, "PCAP: getFilesDir: "          + context.getFilesDir());                     //  /data/user/0/zz.snsn.xlite/files


        String app_files_dir = context.getFilesDir().getPath();
        String pcap_files_dir = app_files_dir + "/pcaps/";          // need trailing "/"
        Log.i(TAG, "PCAP: pcap_files_dir: " + pcap_files_dir);      //  Wrong: /storage/emulated/0/pcaps/
        return pcap_files_dir;
	}
}
