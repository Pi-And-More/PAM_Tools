#ifndef PAM_Tools_H
#define PAM_Tools_H

//
// If getStringKey does not find the key requested, this define is returned
//
#define NOSTRINGKEYFOUND "XNOKEYFNDX"
#define NOINTKEYFOUND -98989898

#include <Arduino.h>
#include <PAM_Defines.h>

void toolsSetup ();
String getStringKey (String, String);
int getIntKey (String, String);
void putStringKey (String, String, String);
void putIntKey (String, String, int);

#endif
