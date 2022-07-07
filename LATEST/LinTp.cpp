/******************************************************************************/
/* File   : LinTp.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "LinTp.hpp"
#include "infLinTp_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LINTP_AR_RELEASE_VERSION_MAJOR                                         4
#define LINTP_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LINTP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible LINTP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(LINTP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible LINTP_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_LinTp, LINTP_VAR) LinTp;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LINTP_CODE) module_LinTp::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, LINTP_CONFIG_DATA, LINTP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == LinTp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == LinTp_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == LinTp_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LINTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::DeInitFunction(
   void
){
#if(STD_ON == LinTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == LinTp_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LINTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::MainFunction(
   void
){
#if(STD_ON == LinTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == LinTp_InitCheck)
   }
   else{
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LINTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::Transmit(
   void
){
}

FUNC(void, LINTP_CODE) module_LinTp::Shutdown(
   void
){
}

FUNC(void, LINTP_CODE) module_LinTp::CancelTransmit(
   void
){
}

FUNC(void, LINTP_CODE) module_LinTp::ChangeParameter(
   void
){
}

FUNC(void, LINTP_CODE) module_LinTp::CancelReceive(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

