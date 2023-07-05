#pragma once
/******************************************************************************/
/* File   : EcuabLinTp_core.hpp                                                    */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabLinTp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABLINTP_CORE_FUNCTIONALITIES                                             \
              FUNC(void, ECUABLINTP_CODE) Transmit             (void);              \
              FUNC(void, ECUABLINTP_CODE) Shutdown             (void);              \
              FUNC(void, ECUABLINTP_CODE) McalCancelTransmit       (void);              \
              FUNC(void, ECUABLINTP_CODE) ChangeParameter      (void);              \
              FUNC(void, ECUABLINTP_CODE) McalCancelReceive        (void);              \

#define ECUABLINTP_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, ECUABLINTP_CODE) Transmit             (void) = 0;          \
      virtual FUNC(void, ECUABLINTP_CODE) Shutdown             (void) = 0;          \
      virtual FUNC(void, ECUABLINTP_CODE) McalCancelTransmit       (void) = 0;          \
      virtual FUNC(void, ECUABLINTP_CODE) ChangeParameter      (void) = 0;          \
      virtual FUNC(void, ECUABLINTP_CODE) McalCancelReceive        (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabLinTp_Functionality{
   public:
      ECUABLINTP_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

