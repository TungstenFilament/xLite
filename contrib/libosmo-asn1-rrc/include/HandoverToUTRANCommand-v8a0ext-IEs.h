/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HandoverToUTRANCommand_v8a0ext_IEs_H_
#define	_HandoverToUTRANCommand_v8a0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_HSPDSCH_Information_r8_ext2;

/* HandoverToUTRANCommand-v8a0ext-IEs */
typedef struct HandoverToUTRANCommand_v8a0ext_IEs {
	struct DL_HSPDSCH_Information_r8_ext2	*dl_HSPDSCH_Information	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverToUTRANCommand_v8a0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverToUTRANCommand_v8a0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-HSPDSCH-Information-r8-ext2.h"

#endif	/* _HandoverToUTRANCommand_v8a0ext_IEs_H_ */
#include <asn_internal.h>