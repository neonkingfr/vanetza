/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "build.asn1/iso/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_SpeedandHeadingIsoandThrottleConfidence_H_
#define	_SpeedandHeadingIsoandThrottleConfidence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HeadingIsoConfidenceIso.h"
#include "SpeedConfidenceIso.h"
#include "ThrottleConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SpeedandHeadingIsoandThrottleConfidence */
typedef struct SpeedandHeadingIsoandThrottleConfidence {
	HeadingIsoConfidenceIso_t	 heading;
	SpeedConfidenceIso_t	 speed;
	ThrottleConfidence_t	 throttle;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedandHeadingIsoandThrottleConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedandHeadingIsoandThrottleConfidence;
extern asn_SEQUENCE_specifics_t asn_SPC_SpeedandHeadingIsoandThrottleConfidence_specs_1;
extern asn_TYPE_member_t asn_MBR_SpeedandHeadingIsoandThrottleConfidence_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedandHeadingIsoandThrottleConfidence_H_ */
#include "asn_internal.h"