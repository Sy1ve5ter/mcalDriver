[!/* *** multiple inclusion protection *** */!]
[!IF "not(var:defined('ADC_VERSIONCHECK_SRC_M'))"!]
[!VAR "ADC_VERSIONCHECK_SRC_M"="'true'"!]
[!NOCODE!][!//
/**
*   @file    Adc_VersionCheck_Src.m
*   @version 1.0.2
*
*   @brief   AUTOSAR Adc - version check macro.
*   @details Version checks.
*
*   @addtogroup ADC
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : ADC12BSARV2
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

[!VAR "ADC_AR_RELEASE_MAJOR_VERSION_TEMPLATE"="4"!][!//
[!VAR "ADC_AR_RELEASE_MINOR_VERSION_TEMPLATE"="3"!][!//
[!VAR "ADC_AR_RELEASE_REVISION_VERSION_TEMPLATE"="1"!][!//
[!VAR "ADC_SW_MAJOR_VERSION_TEMPLATE"="1"!][!//
[!VAR "ADC_SW_MINOR_VERSION_TEMPLATE"="0"!][!//
[!VAR "ADC_SW_PATCH_VERSION_TEMPLATE"="2"!][!// 
[!ENDNOCODE!][!//
[!SELECT "CommonPublishedInformation"!][!//

[!IF "not(num:i(ArReleaseMajorVersion) = num:i($ADC_AR_RELEASE_MAJOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        **** AUTOSAR release major version number of the Basic Software Module Description file (Adc.epd version [!"ArReleaseMajorVersion"!]) and the Code template file are different ****
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(ArReleaseMinorVersion) = num:i($ADC_AR_RELEASE_MINOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        **** AUTOSAR release minor version number of the Basic Software Module Description file (Adc.epd version [!"ArReleaseMinorVersion"!]) and the Code template file are different ****
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(ArReleaseRevisionVersion) = num:i($ADC_AR_RELEASE_REVISION_VERSION_TEMPLATE))"!]
    [!ERROR!]
        **** AUTOSAR release revision version number of the Basic Software Module Description file (Adc.epd version [!"ArReleaseRevisionVersion"!]) and the Code template file are different ****
    [!ENDERROR!]
[!ENDIF!]

[!IF "not(num:i(SwMajorVersion) = num:i($ADC_SW_MAJOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        **** The software major number of the Basic Software Module Description file (Adc.epd version [!"SwMajorVersion"!]) and the Code template file are different ****
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(SwMinorVersion) = num:i($ADC_SW_MINOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        **** The software minor number of the Basic Software Module Description file (Adc.epd version [!"SwMinorVersion"!]) and the Code template file are different ****
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(SwPatchVersion) = num:i($ADC_SW_PATCH_VERSION_TEMPLATE))"!]
    [!ERROR!]
        **** The software patch number of the Basic Software Module Description file (Adc.epd version [!"SwPatchVersion"!]) and the Code template file are different ****
    [!ENDERROR!]
[!ENDIF!]
[!ENDSELECT!][!//
[!ENDIF!]
