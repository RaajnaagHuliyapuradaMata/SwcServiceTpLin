/******************************************************************************/
/* File   : LinTp.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infLinTp_EcuM.hpp"
#include "infLinTp_Dcm.hpp"
#include "infLinTp_SchM.hpp"

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
class module_LinTp:
      public abstract_module
{
   public:
      module_LinTp(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, LINTP_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, LINTP_CONFIG_DATA, LINTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, LINTP_CODE) DeInitFunction (void);
      FUNC(void, LINTP_CODE) MainFunction   (void);
};

extern VAR(module_LinTp, LINTP_VAR) LinTp;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, LINTP_VAR, LINTP_CONST) gptrinfEcuMClient_LinTp = &LinTp;
CONSTP2VAR(infDcmClient,  LINTP_VAR, LINTP_CONST) gptrinfDcmClient_LinTp  = &LinTp;
CONSTP2VAR(infSchMClient, LINTP_VAR, LINTP_CONST) gptrinfSchMClient_LinTp = &LinTp;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgLinTp.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_LinTp, LINTP_VAR) LinTp(
   {
         LINTP_AR_RELEASE_VERSION_MAJOR
      ,  LINTP_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LINTP_CODE) module_LinTp::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, LINTP_CONFIG_DATA, LINTP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == LinTp_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == LinTp_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_LinTp as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == LinTp_InitCheck)
   }
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::DeInitFunction(void){
#if(STD_ON == LinTp_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == LinTp_InitCheck)
   }
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::MainFunction(void){
#if(STD_ON == LinTp_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == LinTp_InitCheck)
   }
#endif
}

class class_LinTp_Unused{
   public:
      FUNC(void, LINTP_CODE) Transmit             (void);
      FUNC(void, LINTP_CODE) Shutdown             (void);
      FUNC(void, LINTP_CODE) CancelTransmit       (void);
      FUNC(void, LINTP_CODE) ChangeParameter      (void);
      FUNC(void, LINTP_CODE) CancelReceive        (void);
};

FUNC(void, LINTP_CODE) class_LinTp_Unused::Transmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::Shutdown(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::CancelTransmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::ChangeParameter(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::CancelReceive(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

