/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PreDefPhyChConfiguration_v770ext_H_
#define	_PreDefPhyChConfiguration_v770ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-DPCH-InfoPredef-v770ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PreDefPhyChConfiguration-v770ext */
typedef struct PreDefPhyChConfiguration_v770ext {
	UL_DPCH_InfoPredef_v770ext_t	 ul_DPCH_InfoPredef;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreDefPhyChConfiguration_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreDefPhyChConfiguration_v770ext;

#ifdef __cplusplus
}
#endif

#endif	/* _PreDefPhyChConfiguration_v770ext_H_ */
#include <asn_internal.h>
