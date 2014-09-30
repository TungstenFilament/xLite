/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MonitoredCellRACH_Result_H_
#define	_MonitoredCellRACH_Result_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include "CPICH-Ec-N0.h"
#include "CPICH-RSCP.h"
#include "Pathloss.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "CellParametersID.h"
#include "PrimaryCCPCH-RSCP.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MonitoredCellRACH_Result__modeSpecificInfo_PR {
	MonitoredCellRACH_Result__modeSpecificInfo_PR_NOTHING,	/* No components present */
	MonitoredCellRACH_Result__modeSpecificInfo_PR_fdd,
	MonitoredCellRACH_Result__modeSpecificInfo_PR_tdd
} MonitoredCellRACH_Result__modeSpecificInfo_PR;
typedef enum MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR {
	MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR_NOTHING,	/* No components present */
	MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR_cpich_Ec_N0,
	MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR_cpich_RSCP,
	MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR_pathloss,
	MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR_spare
} MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR;

/* Forward declarations */
struct SFN_SFN_ObsTimeDifference;

/* MonitoredCellRACH-Result */
typedef struct MonitoredCellRACH_Result {
	struct SFN_SFN_ObsTimeDifference	*sfn_SFN_ObsTimeDifference	/* OPTIONAL */;
	struct MonitoredCellRACH_Result__modeSpecificInfo {
		MonitoredCellRACH_Result__modeSpecificInfo_PR present;
		union MonitoredCellRACH_Result__modeSpecificInfo_u {
			struct MonitoredCellRACH_Result__modeSpecificInfo__fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				struct MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity {
					MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_PR present;
					union MonitoredCellRACH_Result__modeSpecificInfo__fdd__measurementQuantity_u {
						CPICH_Ec_N0_t	 cpich_Ec_N0;
						CPICH_RSCP_t	 cpich_RSCP;
						Pathloss_t	 pathloss;
						NULL_t	 spare;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *measurementQuantity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct MonitoredCellRACH_Result__modeSpecificInfo__tdd {
				CellParametersID_t	 cellParametersID;
				PrimaryCCPCH_RSCP_t	 primaryCCPCH_RSCP;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MonitoredCellRACH_Result_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MonitoredCellRACH_Result;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SFN-SFN-ObsTimeDifference.h"

#endif	/* _MonitoredCellRACH_Result_H_ */
#include <asn_internal.h>