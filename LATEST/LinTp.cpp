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
#define LINTP_AR_RELEASE_MAJOR_VERSION                                         4
#define LINTP_AR_RELEASE_MINOR_VERSION                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LINTP_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible LINTP_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(LINTP_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible LINTP_AR_RELEASE_MINOR_VERSION!"
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
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, LINTP_CODE) InitFunction   (void);
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
         0x0000
      ,  0xFFFF
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
   CONSTP2CONST(CfgLinTp_Type, CFGLINTP_CONFIG_DATA, CFGLINTP_APPL_CONST) lptrCfgLinTp
){
   if(NULL_PTR == lptrCfgLinTp){
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgLinTp for memory faults
// use PBcfg_LinTp as back-up configuration
   }
   LinTp.IsInitDone = E_OK;
}

FUNC(void, LINTP_CODE) module_LinTp::DeInitFunction(void){
   LinTp.IsInitDone = E_NOT_OK;
}

FUNC(void, LINTP_CODE) module_LinTp::MainFunction(void){
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

