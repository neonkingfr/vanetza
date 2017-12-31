/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ElectronicRegistrationIdentificationVehicleDataModule"
 * 	found in "IS_TS103301/ISO_TS_24534-3.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#ifndef	_EuVehicleCategoryCode_H_
#define	_EuVehicleCategoryCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EuVehicleCategoryL.h"
#include "EuVehicleCategoryM.h"
#include "EuVehicleCategoryN.h"
#include "EuVehicleCategoryO.h"
#include "NULL.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EuVehicleCategoryCode_PR {
	EuVehicleCategoryCode_PR_NOTHING,	/* No components present */
	EuVehicleCategoryCode_PR_euVehicleCategoryL,
	EuVehicleCategoryCode_PR_euVehicleCategoryM,
	EuVehicleCategoryCode_PR_euVehicleCategoryN,
	EuVehicleCategoryCode_PR_euVehicleCategoryO,
	EuVehicleCategoryCode_PR_euVehilcleCategoryT,
	EuVehicleCategoryCode_PR_euVehilcleCategoryG
} EuVehicleCategoryCode_PR;

/* EuVehicleCategoryCode */
typedef struct EuVehicleCategoryCode {
	EuVehicleCategoryCode_PR present;
	union EuVehicleCategoryCode_u {
		EuVehicleCategoryL_t	 euVehicleCategoryL;
		EuVehicleCategoryM_t	 euVehicleCategoryM;
		EuVehicleCategoryN_t	 euVehicleCategoryN;
		EuVehicleCategoryO_t	 euVehicleCategoryO;
		NULL_t	 euVehilcleCategoryT;
		NULL_t	 euVehilcleCategoryG;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EuVehicleCategoryCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EuVehicleCategoryCode;
extern asn_CHOICE_specifics_t asn_SPC_EuVehicleCategoryCode_specs_1;
extern asn_TYPE_member_t asn_MBR_EuVehicleCategoryCode_1[6];
extern asn_per_constraints_t asn_PER_type_EuVehicleCategoryCode_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EuVehicleCategoryCode_H_ */
#include "asn_internal.h"
