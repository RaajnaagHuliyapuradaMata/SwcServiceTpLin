/******************************************************************************/
/* File   : EcuabLinTp.cpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabLinTp.hpp"
#include "infEcuabLinTp_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EcuabLinTp, ECUABLINTP_VAR) EcuabLinTp;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABLINTP_CONST,       ECUABLINTP_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABLINTP_CONFIG_DATA, ECUABLINTP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabLinTp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabLinTp_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabLinTp_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabLinTp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABLINTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::DeInitFunction(
   void
){
#if(STD_ON == EcuabLinTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabLinTp_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabLinTp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABLINTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::MainFunction(
   void
){
#if(STD_ON == EcuabLinTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabLinTp_InitCheck)
   }
   else{
#if(STD_ON == EcuabLinTp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABLINTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::Transmit(
   void
){
}

FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::Shutdown(
   void
){
}

FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::McalCancelTransmit(
   void
){
}

FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::ChangeParameter(
   void
){
}

FUNC(void, ECUABLINTP_CODE) module_EcuabLinTp::McalCancelReceive(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

