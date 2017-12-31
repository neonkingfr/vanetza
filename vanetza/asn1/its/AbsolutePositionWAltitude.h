/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#ifndef	_AbsolutePositionWAltitude_H_
#define	_AbsolutePositionWAltitude_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Latitude.h"
#include "Longitude.h"
#include "Altitude.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AbsolutePositionWAltitude */
typedef struct AbsolutePositionWAltitude {
	Latitude_t	 latitude;
	Longitude_t	 longitude;
	Altitude_t	 altitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AbsolutePositionWAltitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AbsolutePositionWAltitude;
extern asn_SEQUENCE_specifics_t asn_SPC_AbsolutePositionWAltitude_specs_1;
extern asn_TYPE_member_t asn_MBR_AbsolutePositionWAltitude_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AbsolutePositionWAltitude_H_ */
#include "asn_internal.h"
