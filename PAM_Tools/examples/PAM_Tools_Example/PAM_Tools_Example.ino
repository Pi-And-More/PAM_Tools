//////////////////////////////////////////////////////////////////////
//
//                    PI and more
//              PAM_WiFiTools library
//
// https://piandmore.wordpress.com/tag/pam_tools
//
//////////////////////////////////////////////////////////////////////
//
// Include the PAM_Tools header
//
#include <PAM_Tools.h>

String myPersistentString = "PI and more";
int myPersistentInt = 30;

void setup() {
  //
  // Check whether there is a value stored in the file system.
  // If not add it.
  //
  String tmpS = getStringKey("parameters","myPersistentString");
  if (tmpS==NOSTRINGKEYFOUND) {
    putStringKey("parameters","myPersistentString",myPersistentString);
  } else {
    myPersistentString = tmpS;
  }

  //
  // Check whether there is a value stored in the file system.
  // If not add it.
  //
  int tmpI = getIntKey("parameters","myPersistentInt");
  if (tmpI==NOINTKEYFOUND) {
    putIntKey("parameters","myPersistentInt",myPersistentInt);
  } else {
    myPersistentInt = tmpI;
  }
}

void loop() {
  
}
