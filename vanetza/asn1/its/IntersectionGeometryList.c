/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "IS_TS103301/ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#include "IntersectionGeometryList.h"

static asn_oer_constraints_t asn_OER_type_IntersectionGeometryList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
asn_per_constraints_t asn_PER_type_IntersectionGeometryList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_IntersectionGeometryList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IntersectionGeometry,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_IntersectionGeometryList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_IntersectionGeometryList_specs_1 = {
	sizeof(struct IntersectionGeometryList),
	offsetof(struct IntersectionGeometryList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_IntersectionGeometryList = {
	"IntersectionGeometryList",
	"IntersectionGeometryList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_IntersectionGeometryList_tags_1,
	sizeof(asn_DEF_IntersectionGeometryList_tags_1)
		/sizeof(asn_DEF_IntersectionGeometryList_tags_1[0]), /* 1 */
	asn_DEF_IntersectionGeometryList_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntersectionGeometryList_tags_1)
		/sizeof(asn_DEF_IntersectionGeometryList_tags_1[0]), /* 1 */
	{ &asn_OER_type_IntersectionGeometryList_constr_1, &asn_PER_type_IntersectionGeometryList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_IntersectionGeometryList_1,
	1,	/* Single element */
	&asn_SPC_IntersectionGeometryList_specs_1	/* Additional specs */
};

