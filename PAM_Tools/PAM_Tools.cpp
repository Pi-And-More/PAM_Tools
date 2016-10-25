//
// include header of PAM_Tools
//
// created by PI and more, piandmore@j-tools.net
//
#include <PAM_Tools.h>

//
// include the File System library
//
#include <FS.h>

//
// Boolean to determine whether the file system has been initialized
//
bool SPIFFSStarted = false;

//
// Initialize the file system
//
void toolsSetup () {
  if (!SPIFFSStarted) {
    SPIFFSStarted = SPIFFS.begin();
  }
}

//
// Retrieve the content of a file in a string
// where the filename is /<location>/<key>.txt
// The .txt extension is used so on Windows you can create
// the needed files in a data directory which you can than
// upload using the ESP8266 Sketch Data Upload
//
String getStringKey (String location, String key) {
  if (!SPIFFSStarted) {
    toolSetup();
  }
  if (SPIFFS.exists("/"+location+"/"+key+".txt")) {
    File f = SPIFFS.open("/"+location+"/"+key+".txt","r");
    //
    // Read the first line of the file which is than returned
    //
    String line = f.readStringUntil('\n');
    return line;
  }
//
// The key was not found, so return NOKEYFOUND
//
  return NOKEYFOUND;
}
