#pragma once
/******************************************************************************/
/* File   : EcuabLinTp.hpp                                                         */
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
#include "ConstEcuabLinTp.hpp"
#include "CfgEcuabLinTp.hpp"
#include "EcuabLinTp_core.hpp"
#include "infEcuabLinTp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabLinTp:
      INTERFACES_EXPORTED_ECUABLINTP
      public abstract_module
   ,  public class_EcuabLinTp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabLinTp_Type* lptrConst = (ConstEcuabLinTp_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabLinTp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABLINTP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABLINTP_CONST,       ECUABLINTP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABLINTP_CONFIG_DATA, ECUABLINTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABLINTP_CODE) DeInitFunction (void);
      FUNC(void, ECUABLINTP_CODE) MainFunction   (void);
      ECUABLINTP_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabLinTp, ECUABLINTP_VAR) EcuabLinTp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

