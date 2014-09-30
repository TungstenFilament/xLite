/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "RadioBearerSetup-r10-IEs.h"

static asn_TYPE_member_t asn_MBR_RadioBearerSetup_r10_IEs_1[] = {
	{ ATF_POINTER, 10, offsetof(struct RadioBearerSetup_r10_IEs, integrityProtectionModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionModeInfo"
		},
	{ ATF_POINTER, 9, offsetof(struct RadioBearerSetup_r10_IEs, cipheringModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringModeInfo"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioBearerSetup_r10_IEs, sr_vcc_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SR_VCC_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sr-vcc-Info"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioBearerSetup_r10_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioBearerSetup_r10_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerSetup_r10_IEs, new_C_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-C-RNTI"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerSetup_r10_IEs, new_DSCH_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSCH_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-DSCH-RNTI"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerSetup_r10_IEs, new_H_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-H-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerSetup_r10_IEs, newPrimary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newPrimary-E-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerSetup_r10_IEs, newSecondary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newSecondary-E-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerSetup_r10_IEs, rrc_StateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_StateIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-StateIndicator"
		},
	{ ATF_POINTER, 38, offsetof(struct RadioBearerSetup_r10_IEs, utran_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_DRX_CycleLengthCoefficient_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-DRX-CycleLengthCoeff"
		},
	{ ATF_POINTER, 37, offsetof(struct RadioBearerSetup_r10_IEs, ura_Identity),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ura-Identity"
		},
	{ ATF_POINTER, 36, offsetof(struct RadioBearerSetup_r10_IEs, supportForChangeOfUE_Capability),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForChangeOfUE-Capability"
		},
	{ ATF_POINTER, 35, offsetof(struct RadioBearerSetup_r10_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-InformationInfo"
		},
	{ ATF_POINTER, 34, offsetof(struct RadioBearerSetup_r10_IEs, srb_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_InformationSetupList_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-InformationSetupList"
		},
	{ ATF_POINTER, 33, offsetof(struct RadioBearerSetup_r10_IEs, rab_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationSetupList_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationSetupList"
		},
	{ ATF_POINTER, 32, offsetof(struct RadioBearerSetup_r10_IEs, rab_InformationReconfigList),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationReconfigList_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationReconfigList"
		},
	{ ATF_POINTER, 31, offsetof(struct RadioBearerSetup_r10_IEs, rb_InformationReconfigList),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationReconfigList_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-InformationReconfigList"
		},
	{ ATF_POINTER, 30, offsetof(struct RadioBearerSetup_r10_IEs, rb_InformationAffectedList),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationAffectedList_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-InformationAffectedList"
		},
	{ ATF_POINTER, 29, offsetof(struct RadioBearerSetup_r10_IEs, dl_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CounterSynchronisationInfo_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CounterSynchronisationInfo"
		},
	{ ATF_POINTER, 28, offsetof(struct RadioBearerSetup_r10_IEs, pdcp_ROHC_TargetMode),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_ROHC_TargetMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-ROHC-TargetMode"
		},
	{ ATF_POINTER, 27, offsetof(struct RadioBearerSetup_r10_IEs, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_POINTER, 26, offsetof(struct RadioBearerSetup_r10_IEs, ul_deletedTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DeletedTransChInfoList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-deletedTransChInfoList"
		},
	{ ATF_POINTER, 25, offsetof(struct RadioBearerSetup_r10_IEs, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 24, offsetof(struct RadioBearerSetup_r10_IEs, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_POINTER, 23, offsetof(struct RadioBearerSetup_r10_IEs, dl_DeletedTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_DeletedTransChInfoList_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DeletedTransChInfoList"
		},
	{ ATF_POINTER, 22, offsetof(struct RadioBearerSetup_r10_IEs, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 21, offsetof(struct RadioBearerSetup_r10_IEs, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_POINTER, 20, offsetof(struct RadioBearerSetup_r10_IEs, multi_frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Multi_frequencyInfo_LCR_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multi-frequencyInfo"
		},
	{ ATF_POINTER, 19, offsetof(struct RadioBearerSetup_r10_IEs, dtx_drx_TimingInfo),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DTX_DRX_TimingInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dtx-drx-TimingInfo"
		},
	{ ATF_POINTER, 18, offsetof(struct RadioBearerSetup_r10_IEs, dtx_drx_Info),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DTX_DRX_Info_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dtx-drx-Info"
		},
	{ ATF_POINTER, 17, offsetof(struct RadioBearerSetup_r10_IEs, hs_scch_LessInfo),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_SCCH_LessInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-scch-LessInfo"
		},
	{ ATF_POINTER, 16, offsetof(struct RadioBearerSetup_r10_IEs, mimoParameters),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_Parameters_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mimoParameters"
		},
	{ ATF_POINTER, 15, offsetof(struct RadioBearerSetup_r10_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 14, offsetof(struct RadioBearerSetup_r10_IEs, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_Info_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_POINTER, 13, offsetof(struct RadioBearerSetup_r10_IEs, ul_EDCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_EDCH_Information_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-EDCH-Information"
		},
	{ ATF_POINTER, 12, offsetof(struct RadioBearerSetup_r10_IEs, ul_SecondaryCellInfoFDD),
		(ASN_TAG_CLASS_CONTEXT | (37 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_SecondaryCellInfoFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-SecondaryCellInfoFDD"
		},
	{ ATF_POINTER, 11, offsetof(struct RadioBearerSetup_r10_IEs, ul_MulticarrierEDCHInfo_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (38 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_MulticarrierEDCHInfo_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-MulticarrierEDCHInfo-TDD128"
		},
	{ ATF_POINTER, 10, offsetof(struct RadioBearerSetup_r10_IEs, dl_HSPDSCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (39 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_HSPDSCH_Information_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-HSPDSCH-Information"
		},
	{ ATF_POINTER, 9, offsetof(struct RadioBearerSetup_r10_IEs, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (40 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioBearerSetup_r10_IEs, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (41 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioBearerSetup_r10_IEs, dl_SecondaryCellInfoFDD),
		(ASN_TAG_CLASS_CONTEXT | (42 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_SecondaryCellInfoFDD_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-SecondaryCellInfoFDD"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioBearerSetup_r10_IEs, additionalDLSecCellInfoListFDD),
		(ASN_TAG_CLASS_CONTEXT | (43 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalDLSecCellInfoListFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalDLSecCellInfoListFDD"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerSetup_r10_IEs, controlChannelDRXInfo_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (44 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ControlChannelDRXInfo_TDD128_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"controlChannelDRXInfo-TDD128"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerSetup_r10_IEs, sps_Information_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (45 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Information_TDD128_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sps-Information-TDD128"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerSetup_r10_IEs, mu_MIMO_Info_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (46 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MU_MIMO_Info_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mu-MIMO-Info-TDD128"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerSetup_r10_IEs, mbms_PL_ServiceRestrictInfo),
		(ASN_TAG_CLASS_CONTEXT | (47 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PL_ServiceRestrictInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-PL-ServiceRestrictInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerSetup_r10_IEs, cellDCHMeasOccasionInfo_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (48 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellDCHMeasOccasionInfo_TDD128_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellDCHMeasOccasionInfo-TDD128"
		},
};
static int asn_MAP_RadioBearerSetup_r10_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48 };
static ber_tlv_tag_t asn_DEF_RadioBearerSetup_r10_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioBearerSetup_r10_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integrityProtectionModeInfo at 7659 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cipheringModeInfo at 7660 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sr-vcc-Info at 7661 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* activationTime at 7662 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* new-U-RNTI at 7663 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* new-C-RNTI at 7664 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* new-DSCH-RNTI at 7667 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* new-H-RNTI at 7668 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* newPrimary-E-RNTI at 7669 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* newSecondary-E-RNTI at 7670 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* rrc-StateIndicator at 7671 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* utran-DRX-CycleLengthCoeff at 7672 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ura-Identity at 7674 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* supportForChangeOfUE-Capability at 7675 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* cn-InformationInfo at 7677 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* srb-InformationSetupList at 7679 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* rab-InformationSetupList at 7680 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* rab-InformationReconfigList at 7681 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* rb-InformationReconfigList at 7682 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* rb-InformationAffectedList at 7683 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* dl-CounterSynchronisationInfo at 7684 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* pdcp-ROHC-TargetMode at 7685 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* ul-CommonTransChInfo at 7687 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* ul-deletedTransChInfoList at 7688 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* ul-AddReconfTransChInfoList at 7689 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* dl-CommonTransChInfo at 7690 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* dl-DeletedTransChInfoList at 7691 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* dl-AddReconfTransChInfoList at 7692 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* frequencyInfo at 7694 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* multi-frequencyInfo at 7695 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* dtx-drx-TimingInfo at 7696 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 }, /* dtx-drx-Info at 7697 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 32, 0, 0 }, /* hs-scch-LessInfo at 7698 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 33, 0, 0 }, /* mimoParameters at 7699 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 34, 0, 0 }, /* maxAllowedUL-TX-Power at 7700 */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 35, 0, 0 }, /* ul-DPCH-Info at 7701 */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 36, 0, 0 }, /* ul-EDCH-Information at 7702 */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 37, 0, 0 }, /* ul-SecondaryCellInfoFDD at 7703 */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 38, 0, 0 }, /* ul-MulticarrierEDCHInfo-TDD128 at 7704 */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 39, 0, 0 }, /* dl-HSPDSCH-Information at 7705 */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 40, 0, 0 }, /* dl-CommonInformation at 7706 */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 41, 0, 0 }, /* dl-InformationPerRL-List at 7707 */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 42, 0, 0 }, /* dl-SecondaryCellInfoFDD at 7708 */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 43, 0, 0 }, /* additionalDLSecCellInfoListFDD at 7709 */
    { (ASN_TAG_CLASS_CONTEXT | (44 << 2)), 44, 0, 0 }, /* controlChannelDRXInfo-TDD128 at 7710 */
    { (ASN_TAG_CLASS_CONTEXT | (45 << 2)), 45, 0, 0 }, /* sps-Information-TDD128 at 7711 */
    { (ASN_TAG_CLASS_CONTEXT | (46 << 2)), 46, 0, 0 }, /* mu-MIMO-Info-TDD128 at 7712 */
    { (ASN_TAG_CLASS_CONTEXT | (47 << 2)), 47, 0, 0 }, /* mbms-PL-ServiceRestrictInfo at 7714 */
    { (ASN_TAG_CLASS_CONTEXT | (48 << 2)), 48, 0, 0 } /* cellDCHMeasOccasionInfo-TDD128 at 7716 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioBearerSetup_r10_IEs_specs_1 = {
	sizeof(struct RadioBearerSetup_r10_IEs),
	offsetof(struct RadioBearerSetup_r10_IEs, _asn_ctx),
	asn_MAP_RadioBearerSetup_r10_IEs_tag2el_1,
	49,	/* Count of tags in the map */
	asn_MAP_RadioBearerSetup_r10_IEs_oms_1,	/* Optional members */
	48, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_r10_IEs = {
	"RadioBearerSetup-r10-IEs",
	"RadioBearerSetup-r10-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RadioBearerSetup_r10_IEs_tags_1,
	sizeof(asn_DEF_RadioBearerSetup_r10_IEs_tags_1)
		/sizeof(asn_DEF_RadioBearerSetup_r10_IEs_tags_1[0]), /* 1 */
	asn_DEF_RadioBearerSetup_r10_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioBearerSetup_r10_IEs_tags_1)
		/sizeof(asn_DEF_RadioBearerSetup_r10_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioBearerSetup_r10_IEs_1,
	49,	/* Elements count */
	&asn_SPC_RadioBearerSetup_r10_IEs_specs_1	/* Additional specs */
};
