/******************************************************************************/
/* File   : EcuabLinTp.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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
#define ECUABLINTP_AR_RELEASE_VERSION_MAJOR                                    4
#define ECUABLINTP_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABLINTP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABLINTP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABLINTP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABLINTP_AR_RELEASE_VERSION_MINOR!"
#endif

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
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABLINTP_CONST,       ECUABLINTP_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABLINTP_CONFIG_DATA, ECUABLINTP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabLinTp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEcuabLinTp_Type*)lptrConstModule;
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

