/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "IS_TS103301/ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#ifndef	_RestrictionUserType_H_
#define	_RestrictionUserType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RestrictionAppliesTo.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RestrictionUserType_PR {
	RestrictionUserType_PR_NOTHING,	/* No components present */
	RestrictionUserType_PR_basicType,
	RestrictionUserType_PR_regional
	/* Extensions may appear below */
	
} RestrictionUserType_PR;

/* Forward declarations */
struct RegionalExtension;

/* RestrictionUserType */
typedef struct RestrictionUserType {
	RestrictionUserType_PR present;
	union RestrictionUserType_u {
		RestrictionAppliesTo_t	 basicType;
		struct RestrictionUserType__regional {
			A_SEQUENCE_OF(struct RegionalExtension) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} regional;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RestrictionUserType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RestrictionUserType;
extern asn_CHOICE_specifics_t asn_SPC_RestrictionUserType_specs_1;
extern asn_TYPE_member_t asn_MBR_RestrictionUserType_1[2];
extern asn_per_constraints_t asn_PER_type_RestrictionUserType_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalExtension.h"

#endif	/* _RestrictionUserType_H_ */
#include "asn_internal.h"
