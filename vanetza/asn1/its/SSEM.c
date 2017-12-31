/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SSEM-PDU-Descriptions"
 * 	found in "IS_TS103301/ETSI_TS_103301.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#include "SSEM.h"

static asn_TYPE_member_t asn_MBR_SSEM_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSEM, header),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ItsPduHeader,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"header"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSEM, ssm),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignalStatusMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssm"
		},
};
static const ber_tlv_tag_t asn_DEF_SSEM_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SSEM_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* header */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssm */
};
static asn_SEQUENCE_specifics_t asn_SPC_SSEM_specs_1 = {
	sizeof(struct SSEM),
	offsetof(struct SSEM, _asn_ctx),
	asn_MAP_SSEM_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSEM = {
	"SSEM",
	"SSEM",
	&asn_OP_SEQUENCE,
	asn_DEF_SSEM_tags_1,
	sizeof(asn_DEF_SSEM_tags_1)
		/sizeof(asn_DEF_SSEM_tags_1[0]), /* 1 */
	asn_DEF_SSEM_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSEM_tags_1)
		/sizeof(asn_DEF_SSEM_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SSEM_1,
	2,	/* Elements count */
	&asn_SPC_SSEM_specs_1	/* Additional specs */
};

