/**
*   @file    Gpt_Irq.h
*   @version 1.0.2
*
*   @brief   AUTOSAR Gpt - Gpt driver header file.
*   @details GPT driver header file, containing variables, functions prototypes, data types and/or
*            defines and macros that:
*            - are Autosar specific and are not exported by the GPT driver.
*            - are not related to the GPT driver related IPs.
*
*   @addtogroup GPT_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : Ftm
*   Dependencies         : none
*
*   Autosar Version      : 4.3.1
*   Autosar Revision     : ASR_REL_4_3_REV_0001
*   Autosar Conf.Variant :
*   SW Version           : 1.0.2
*   Build Version        : S32K1XX_MCAL_1_0_2_RTM_ASR_REL_4_3_REV_0001_23-Apr-21
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2021 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef GPT_IRQ_H
#define GPT_IRQ_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
*     Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*     on the significance of more than 31 characters. The used compilers use more than 31 chars for
*     identifiers.
*
* @section GPT_IRQ_H_REF_1
* Violates MISRA 2004 Required Rule 19.15, Repeated include file
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section GPT_IRQ_H_REF_2
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure
* that 31 character significance and case sensitivity are supported for external identifiers.
* Compilers and linkers checked. Feature is supported
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/




#define GPT_IRQ_VENDOR_ID                      43
/** @violates @ref GPT_IRQ_H_REF_2 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure that 31 character
*   significance and case sensitivity are supported for external identifiers. */
#define GPT_IRQ_AR_RELEASE_MAJOR_VERSION       4
/** @violates @ref GPT_IRQ_H_REF_2 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure that 31 character
*   significance and case sensitivity are supported for external identifiers. */
#define GPT_IRQ_AR_RELEASE_MINOR_VERSION       3
/** @violates @ref GPT_IRQ_H_REF_2 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure that 31 character
*   significance and case sensitivity are supported for external identifiers. */
#define GPT_IRQ_AR_RELEASE_REVISION_VERSION    1
#define GPT_IRQ_SW_MAJOR_VERSION               1
#define GPT_IRQ_SW_MINOR_VERSION               0
#define GPT_IRQ_SW_PATCH_VERSION               2


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                           CONSTANT-LIKE DEFINES
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define GPT_START_SEC_CODE
/** @violates @ref GPT_IRQ_H_REF_1 Repeated include file MemMap.h */
#include "Gpt_MemMap.h"

FUNC(void, GPT_CODE) Gpt_ProcessCommonInterrupt(VAR(uint8, AUTOMATIC) u8MapTableIndex);
#define GPT_STOP_SEC_CODE
/** @violates @ref GPT_IRQ_H_REF_1 Repeated include file MemMap.h */
#include "Gpt_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /*GPT_IRQ_H*/

/** @} */
