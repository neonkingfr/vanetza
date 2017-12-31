/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "IS_TS103301/ISO_TS_14906_Application.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#ifndef	_AxleWeightLimits_H_
#define	_AxleWeightLimits_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Int2.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AxleWeightLimits */
typedef struct AxleWeightLimits {
	Int2_t	 maxLadenweightOnAxle1;
	Int2_t	 maxLadenweightOnAxle2;
	Int2_t	 maxLadenweightOnAxle3;
	Int2_t	 maxLadenweightOnAxle4;
	Int2_t	 maxLadenweightOnAxle5;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AxleWeightLimits_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AxleWeightLimits;
extern asn_SEQUENCE_specifics_t asn_SPC_AxleWeightLimits_specs_1;
extern asn_TYPE_member_t asn_MBR_AxleWeightLimits_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _AxleWeightLimits_H_ */
#include "asn_internal.h"
