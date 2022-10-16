/**
*   @file    Eep_Types.h  
*   @implements Eep_Types.h_Artifact 
*   @version 1.0.2
*
*   @brief   AUTOSAR Eep - AUTOSAR Module Eeprom Driver.
*   @details Definitions of all Eeprom driver exported types.
*
*   @addtogroup EEP
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : IPV_FTFE
*   Dependencies         : 
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

#ifndef EEP_TYPES_H
#define EEP_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31 characters. 
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 20.2, The names of standard library macros,
* objects and functions shall not be reused. All defines starting with upper
* letter E are reserved for future use inside <error.h> header file.
* All module define options and enumerations are restricted by smcal coding rules
* 5.6 and 5.8 and must follow format <MSN>_<NAME> where MSN is equal to EEP.
* It was agreed that this violation will not be commented above each line but
* only in header of affected file.
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Std_Types.h"
#include "MemIf_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EEP_TYPES_VENDOR_ID                    43
#define EEP_TYPES_MODULE_ID                    90
#define EEP_TYPES_AR_RELEASE_MAJOR_VERSION     4
#define EEP_TYPES_AR_RELEASE_MINOR_VERSION     3
#define EEP_TYPES_AR_RELEASE_REVISION_VERSION  1
#define EEP_TYPES_SW_MAJOR_VERSION             1
#define EEP_TYPES_SW_MINOR_VERSION             0
#define EEP_TYPES_SW_PATCH_VERSION             2
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Std_Types.h file are of the same version */
    #if ((EEP_TYPES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (EEP_TYPES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)\
        )
        #error "AutoSar Version Numbers of Eep_Types.h and Std_Types.h are different"
    #endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and MemIf_Types.h file are of the same version */
    #if ((EEP_TYPES_AR_RELEASE_MAJOR_VERSION != MEMIF_AR_RELEASE_MAJOR_VERSION) || \
         (EEP_TYPES_AR_RELEASE_MINOR_VERSION != MEMIF_AR_RELEASE_MINOR_VERSION)\
        )
        #error "AutoSar Version Numbers of Eep_Types.h and MemIf_Types.h are different"
    #endif
#endif
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/



/** 
    @brief Define pointer type of erase access code function
*/
typedef P2FUNC( void, EEP_CODE, Eep_Eeprom_AcErasePtrNoTOType )  (
                                                                      
                                                                    P2FUNC(void, EEP_CODE, CallBack)( void ),
                                                                    VAR(uint8, AUTOMATIC) u8PageSize
                                                                );

/**
    @brief Define pointer type of write access code function
*/
typedef P2FUNC( void, EEP_CODE, Eep_Eeprom_AcWritePtrNoTOType )  (
                                                                      
                                                                    P2FUNC(void, EEP_CODE, CallBack)( void ),
                                                                    VAR(uint8, AUTOMATIC) u8PageSize
                                                                );



/**
* @brief          Eep Address Type.
* @details        Address offset from the configured eeprom base address to access a certain eeprom 
*                 memory area.
* @implements Eep_AddressType_typedef
*/
typedef uint32 Eep_AddressType;

/**
* @brief          Eep Length Type.
* @details        Number of bytes to read,write,erase,compare
* @implements Eep_LengthType_typedef
*/
typedef uint32 Eep_LengthType;


/**
 * @brief Pointer type of Eep_AC_Callback function
*/
typedef P2FUNC( void, EEP_CODE, Eep_ACCallbackPtrType )  ( void );


/**
* @brief          Eep Job End Notification Pointer Type
* @details        Pointer type of Eep_JobEndNotification function
* 
*/
typedef P2FUNC(void, EEP_CODE, Eep_JobEndNotificationPtrType)(void);

/**
* @brief          Eep Job Error Notification Pointer Type
* @details        Pointer type of Eep_JobErrorNotification function
* 
*/
typedef P2FUNC(void, EEP_CODE, Eep_JobErrorNotificationPtrType)(void);  


/**
* @brief          Eep Start Eeprom Access Notification Pointer Type
* @details        Pointer type of Eep_StartEepromAccessNotif function
*
*/
typedef P2FUNC(void, EEP_CODE, Eep_StartEepromAccessNotifPtrType)(void);

/**
* @brief          Eep Finished Eeprom Access Notification Pointer Type
* @details        Pointer type of Eep_FinishedEepromAccessNotif function
* 
*/
typedef P2FUNC(void, EEP_CODE, Eep_FinishedEepromAccessNotifPtrType)(void);  


/**
* @brief          Eep CRC Type.
* @details        CRC computed over config set.
* 
*/
typedef uint16 Eep_CrcType;



#ifdef __cplusplus
}
#endif

#endif /* EEP_TYPES_H */

/** @}*/
