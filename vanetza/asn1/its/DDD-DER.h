/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#ifndef	_DDD_DER_H_
#define	_DDD_DER_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DDD_DER {
	DDD_DER_none	= 0,
	DDD_DER_nationalHighway	= 1,
	DDD_DER_localHighway	= 2,
	DDD_DER_tollExpresswayMotorway	= 3,
	DDD_DER_internationalHighway	= 4,
	DDD_DER_highway	= 5,
	DDD_DER_expressway	= 6,
	DDD_DER_nationalRoad	= 7,
	DDD_DER_regionalProvincialRoad	= 8,
	DDD_DER_localRoad	= 9,
	DDD_DER_motorwayJunction	= 10,
	DDD_DER_diversion	= 11,
	DDD_DER_rfu1	= 12,
	DDD_DER_rfu2	= 13,
	DDD_DER_rfu3	= 14,
	DDD_DER_rfu4	= 15
} e_DDD_DER;

/* DDD-DER */
typedef long	 DDD_DER_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DDD_DER_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DDD_DER;
asn_struct_free_f DDD_DER_free;
asn_struct_print_f DDD_DER_print;
asn_constr_check_f DDD_DER_constraint;
ber_type_decoder_f DDD_DER_decode_ber;
der_type_encoder_f DDD_DER_encode_der;
xer_type_decoder_f DDD_DER_decode_xer;
xer_type_encoder_f DDD_DER_encode_xer;
oer_type_decoder_f DDD_DER_decode_oer;
oer_type_encoder_f DDD_DER_encode_oer;
per_type_decoder_f DDD_DER_decode_uper;
per_type_encoder_f DDD_DER_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DDD_DER_H_ */
#include "asn_internal.h"
