#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_LinTp.h"

class class_LinTp{
   public:
      FUNC(void, LINTP_CODE) InitFunction         (void);
      FUNC(void, LINTP_CODE) GetVersionInfo       (void);
      FUNC(void, LINTP_CODE) Transmit             (void);
      FUNC(void, LINTP_CODE) Shutdown             (void);
      FUNC(void, LINTP_CODE) CancelTransmit       (void);
      FUNC(void, LINTP_CODE) ChangeParameter      (void);
      FUNC(void, LINTP_CODE) CancelReceive        (void);
};

extern class_LinTp LinTp;

