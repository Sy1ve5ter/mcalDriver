[!NOCODE!]
/**
*   @file    Can_SourceClock.m
*   @version 1.0.2
*
*   @brief   AUTOSAR Can - version check macro.
*   @details Extract source clock from MCU plugin.
*
*   @addtogroup [CAN]
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : FLEXCAN
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
[!ENDNOCODE!]
[!/* *** multiple inclusion protection *** */!]
[!IF "not(var:defined('CAN_SOURCECLOCK_M'))"!]
[!VAR "CAN_SOURCECLOCK_M"="'true'"!]
[!MACRO "CanClockFrequency_M"!]

    [!/* Use the Reference of MCU from CAN module and calculate CAN clock Frequency for any late useless. 
         The scope is to calculate the <<OutCanClockFrequencyFromMcu>> valiable from below (in Hz). */!]
    [!SELECT "node:ref(../../CanCpuClockRef)"!][!/* Switch to MCU model to obtain clock source - MCU is refered by CAN module! */!]
        [!/* If the McuClockReferencePointFrequency value is zero, the clock configured in "GeneralClockSettings/SystemClockSelect" will be the 
            system clock and the respective container parameters will be used. */!]
        [!VAR "OutCanClockFrequencyFromMcu" = "McuClockReferencePointFrequency"!]

    [!ENDSELECT!]

    [!IF "node:exists(./../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]
        [!IF "node:exists(../../CanCpuClockRef_Alternate)"!]
            [!SELECT "node:ref(../../CanCpuClockRef_Alternate)"!][!/* Switch to MCU model to obtain clock source - MCU is refered by CAN module! */!]
            [!/* If the McuClockReferencePointFrequency value is zero, the clock configured in "GeneralClockSettings/SystemClockSelect" will be the 
                system clock and the respective container parameters will be used. */!]
            [!VAR "OutCanClockFrequencyFromMcu_Alternate" = "McuClockReferencePointFrequency"!]
            
            [!ENDSELECT!]
        [!ENDIF!]
    [!ENDIF!][!ENDIF!]
[!ENDMACRO!]

    
[!ENDIF!]
[!NOCODE!]
/** @} */
[!ENDNOCODE!]
