/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#include "GeographicLocationContainer.h"

static int
memb_parts_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_parts_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_type_parts_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  1,  16 }	/* (SIZE(1..16,...)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_parts_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_parts_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  1,  16 }	/* (SIZE(1..16,...)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_parts_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GlcPart,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_parts_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_parts_specs_6 = {
	sizeof(struct GeographicLocationContainer__parts),
	offsetof(struct GeographicLocationContainer__parts, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_parts_6 = {
	"parts",
	"parts",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_parts_tags_6,
	sizeof(asn_DEF_parts_tags_6)
		/sizeof(asn_DEF_parts_tags_6[0]) - 1, /* 1 */
	asn_DEF_parts_tags_6,	/* Same as above */
	sizeof(asn_DEF_parts_tags_6)
		/sizeof(asn_DEF_parts_tags_6[0]), /* 2 */
	{ &asn_OER_type_parts_constr_6, &asn_PER_type_parts_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_parts_6,
	1,	/* Single element */
	&asn_SPC_parts_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GeographicLocationContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicLocationContainer, referencePosition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferencePosition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referencePosition"
		},
	{ ATF_POINTER, 3, offsetof(struct GeographicLocationContainer, referencePositionTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimestampIts,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referencePositionTime"
		},
	{ ATF_POINTER, 2, offsetof(struct GeographicLocationContainer, referencePositionHeading),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referencePositionHeading"
		},
	{ ATF_POINTER, 1, offsetof(struct GeographicLocationContainer, referencePositionSpeed),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Speed,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referencePositionSpeed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicLocationContainer, parts),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_parts_6,
		0,
		{ &asn_OER_memb_parts_constr_6, &asn_PER_memb_parts_constr_6,  memb_parts_constraint_1 },
		0, 0, /* No default value */
		"parts"
		},
};
static const int asn_MAP_GeographicLocationContainer_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_GeographicLocationContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GeographicLocationContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referencePosition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referencePositionTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* referencePositionHeading */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* referencePositionSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* parts */
};
asn_SEQUENCE_specifics_t asn_SPC_GeographicLocationContainer_specs_1 = {
	sizeof(struct GeographicLocationContainer),
	offsetof(struct GeographicLocationContainer, _asn_ctx),
	asn_MAP_GeographicLocationContainer_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_GeographicLocationContainer_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GeographicLocationContainer = {
	"GeographicLocationContainer",
	"GeographicLocationContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_GeographicLocationContainer_tags_1,
	sizeof(asn_DEF_GeographicLocationContainer_tags_1)
		/sizeof(asn_DEF_GeographicLocationContainer_tags_1[0]), /* 1 */
	asn_DEF_GeographicLocationContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_GeographicLocationContainer_tags_1)
		/sizeof(asn_DEF_GeographicLocationContainer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GeographicLocationContainer_1,
	5,	/* Elements count */
	&asn_SPC_GeographicLocationContainer_specs_1	/* Additional specs */
};

