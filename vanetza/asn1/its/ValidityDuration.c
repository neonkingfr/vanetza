/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "CDD_TS102894-2/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#include "ValidityDuration.h"

int
ValidityDuration_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 86400)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ValidityDuration_constr_1 CC_NOTUSED = {
	{ 4, 1 }	/* (0..86400) */,
	-1};
asn_per_constraints_t asn_PER_type_ValidityDuration_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 17, -1,  0,  86400 }	/* (0..86400) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_ValidityDuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ValidityDuration = {
	"ValidityDuration",
	"ValidityDuration",
	&asn_OP_NativeInteger,
	asn_DEF_ValidityDuration_tags_1,
	sizeof(asn_DEF_ValidityDuration_tags_1)
		/sizeof(asn_DEF_ValidityDuration_tags_1[0]), /* 1 */
	asn_DEF_ValidityDuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_ValidityDuration_tags_1)
		/sizeof(asn_DEF_ValidityDuration_tags_1[0]), /* 1 */
	{ &asn_OER_type_ValidityDuration_constr_1, &asn_PER_type_ValidityDuration_constr_1, ValidityDuration_constraint },
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};

