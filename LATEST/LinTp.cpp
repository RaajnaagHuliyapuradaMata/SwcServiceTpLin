/******************************************************************************/
/* File   : LinTp.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "LinTp_Cfg.h"
#include "infLinTp_EcuM.h"
#include "infLinTp_Dcm.h"
#include "infLinTp_SchM.h"

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
      FUNC(void, LINTP_CODE) InitFunction   (void);
      FUNC(void, LINTP_CODE) DeInitFunction (void);
      FUNC(void, LINTP_CODE) GetVersionInfo (void);
      FUNC(void, LINTP_CODE) MainFunction   (void);
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
VAR(module_LinTp, LINTP_VAR) LinTp;
CONSTP2VAR(infEcuMClient, LINTP_VAR, LINTP_CONST) gptrinfEcuMClient_LinTp = &LinTp;
CONSTP2VAR(infDcmClient,  LINTP_VAR, LINTP_CONST) gptrinfDcmClient_LinTp  = &LinTp;
CONSTP2VAR(infSchMClient, LINTP_VAR, LINTP_CONST) gptrinfSchMClient_LinTp = &LinTp;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LINTP_CODE) module_LinTp::InitFunction(void){
   LinTp.IsInitDone = E_OK;
}

FUNC(void, LINTP_CODE) module_LinTp::DeInitFunction(void){
   LinTp.IsInitDone = E_NOT_OK;
}

FUNC(void, LINTP_CODE) module_LinTp::GetVersionInfo(void){
#if(STD_ON == LinTp_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::MainFunction(void){
}

#include "LinTp_Unused.h"

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

