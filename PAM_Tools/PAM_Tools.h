#ifndef PAM_Tools_H
#define PAM_Tools_H

//
// If getStringKey does not find the key requested, this define is returned
//
#define NOKEYFOUND "XNOKEYFNDX"

#include <Arduino.h>
#include <PAM_Defines.h>

void toolsSetup ();
String getStringKey (String, String);

#ifdef IFTTT
void ifttt (String);
void ifttt (String, String);
void ifttt (String, String, String);
void ifttt (String, String, String, String);
#endif

#endif
