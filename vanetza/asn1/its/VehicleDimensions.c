/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "IS_TS103301/ISO_TS_14906_Application.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#include "VehicleDimensions.h"

asn_TYPE_member_t asn_MBR_VehicleDimensions_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleDimensions, vehicleLengthOverall),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleLengthOverall"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleDimensions, vehicleHeigthOverall),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleHeigthOverall"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleDimensions, vehicleWidthOverall),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleWidthOverall"
		},
};
static const ber_tlv_tag_t asn_DEF_VehicleDimensions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VehicleDimensions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vehicleLengthOverall */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* vehicleHeigthOverall */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* vehicleWidthOverall */
};
asn_SEQUENCE_specifics_t asn_SPC_VehicleDimensions_specs_1 = {
	sizeof(struct VehicleDimensions),
	offsetof(struct VehicleDimensions, _asn_ctx),
	asn_MAP_VehicleDimensions_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VehicleDimensions = {
	"VehicleDimensions",
	"VehicleDimensions",
	&asn_OP_SEQUENCE,
	asn_DEF_VehicleDimensions_tags_1,
	sizeof(asn_DEF_VehicleDimensions_tags_1)
		/sizeof(asn_DEF_VehicleDimensions_tags_1[0]), /* 1 */
	asn_DEF_VehicleDimensions_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleDimensions_tags_1)
		/sizeof(asn_DEF_VehicleDimensions_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VehicleDimensions_1,
	3,	/* Elements count */
	&asn_SPC_VehicleDimensions_specs_1	/* Additional specs */
};

