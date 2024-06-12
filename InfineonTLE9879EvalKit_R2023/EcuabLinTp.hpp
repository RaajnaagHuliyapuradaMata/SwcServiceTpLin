#pragma once
/******************************************************************************/
/* File   : EcuabLinTp.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infEcuabLinTp_ServiceNvM_Types.hpp"
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
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabLinTp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABLINTP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABLINTP_CONST,       ECUABLINTP_APPL_CONST) lptrNvMBlocksRomModule
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

