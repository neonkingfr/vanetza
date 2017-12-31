/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CITSapplMgmtIDs"
 * 	found in "IS_TS103301/ISO_TS_17419.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#ifndef	_VarLengthNumber_H_
#define	_VarLengthNumber_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "Ext1.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarLengthNumber_PR {
	VarLengthNumber_PR_NOTHING,	/* No components present */
	VarLengthNumber_PR_content,
	VarLengthNumber_PR_extension
} VarLengthNumber_PR;

/* VarLengthNumber */
typedef struct VarLengthNumber {
	VarLengthNumber_PR present;
	union VarLengthNumber_u {
		long	 content;
		Ext1_t	 extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLengthNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLengthNumber;
extern asn_CHOICE_specifics_t asn_SPC_VarLengthNumber_specs_1;
extern asn_TYPE_member_t asn_MBR_VarLengthNumber_1[2];
extern asn_per_constraints_t asn_PER_type_VarLengthNumber_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _VarLengthNumber_H_ */
#include "asn_internal.h"
