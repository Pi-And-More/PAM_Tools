#ifndef PAM_Tools_H
#define PAM_Tools_H

//
// If getStringKey does not find the key requested, this define is returned
//
#define NOSTRINGKEYFOUND "XNOKEYFNDX"
#define NOINTKEYFOUND -98989898
#define NOFLOATKEYFOUND -98989898.9898

#include <Arduino.h>
#include <PAM_Defines.h>

void toolsSetup ();
String getStringKey (String, String);
int getIntKey (String, String);
float getFloatKey (String, String);
bool getBoolKey (String, String);
void putStringKey (String, String, String);
void putIntKey (String, String, int);
void putFloatKey (String, String, float);
void putBoolKey (String, String, bool);
String getPutStringKey (String, String, String);
int getPutIntKey (String, String, int);
float getPutFloatKey (String, String, float);
bool getPutBoolKey (String, String, bool);

#endif
