/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "IS_TS103301/ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#ifndef	_RestrictionClassList_H_
#define	_RestrictionClassList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RestrictionClassAssignment;

/* RestrictionClassList */
typedef struct RestrictionClassList {
	A_SEQUENCE_OF(struct RestrictionClassAssignment) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RestrictionClassList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RestrictionClassList;
extern asn_SET_OF_specifics_t asn_SPC_RestrictionClassList_specs_1;
extern asn_TYPE_member_t asn_MBR_RestrictionClassList_1[1];
extern asn_per_constraints_t asn_PER_type_RestrictionClassList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RestrictionClassAssignment.h"

#endif	/* _RestrictionClassList_H_ */
#include "asn_internal.h"
