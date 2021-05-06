/* 
***************************************************************************  
**  Program  : Debug.h, part of DSMRloggerAPI
**  Version  : v3.0.0
**
**  Copyright (c) 2021 Willem Aandewiel
**  Met dank aan Erik
**
**  TERMS OF USE: MIT License. See bottom of file.                                                            
***************************************************************************      
*/

//------------------------ werkt dit?? -------------------
  char *stackStart;
//------------------------ werkt dit?? -------------------

/*---- start macro's ------------------------------------------------------------------*/


#define DebugFlush()    ({ Serial.flush(); \
                           TelnetStream.flush(); \
                        })

#define Debug(...)      ({ Serial.print(__VA_ARGS__);         \
                           TelnetStream.print(__VA_ARGS__);   \
                        })
#define Debugln(...)    ({ Serial.println(__VA_ARGS__);       \
                           TelnetStream.println(__VA_ARGS__); \
                        })
#define Debugf(...)     ({ Serial.printf(__VA_ARGS__);        \
                           TelnetStream.printf(__VA_ARGS__);  \
                        })


#define DebugT(...)     ({ _debugBOL(__FUNCTION__, __LINE__);  \
                           Debug(__VA_ARGS__);                 \
                        })
#define DebugTln(...)   ({ _debugBOL(__FUNCTION__, __LINE__);  \
                           Debugln(__VA_ARGS__);               \
                        })
#define DebugTf(...)    ({ _debugBOL(__FUNCTION__, __LINE__);  \
                           Debugf(__VA_ARGS__);                \
                        })

/*---- einde macro's ------------------------------------------------------------------*/

// needs #include <TelnetStream.h>       // Version 0.0.1 - https://github.com/jandrassy/TelnetStream

char _bol[128];
void _debugBOL(const char *fn, int line)
{
  char stack;
   //                           [Time----][FreeHeap/Stck][Function----(line):
  snprintf(_bol, sizeof(_bol), "[%02d:%02d:%02d][%7u|%5u] %-12.12s(%4d): ", \
                hour(), minute(), second(), \
//              ESP.getFreeHeap(), ESP.getMaxFreeBlockSize(),
#if defined(ESP8266)
                ESP.getMaxFreeBlockSize(), (stackStart - &stack), \
                fn, line);
#else
                ESP.getFreeHeap(), (stackStart - &stack), \
                fn, line);
#endif
                 
  Serial.print (_bol);
  TelnetStream.print (_bol);
}
