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
    toolsSetup();
  }
  if (SPIFFS.exists("/"+location+"/"+key+".txt")) {
    File f = SPIFFS.open("/"+location+"/"+key+".txt","r");
    //
    // Read the first line of the file which is than returned
    //
    String line = f.readStringUntil('\n');
    if (line.length()>0 && line.charAt(line.length()-1)=='\r') {
      line = line.substring(0,line.length()-1);
    }
    return line;
  }
//
// The key was not found, so return NOKEYFOUND
//
  return NOSTRINGKEYFOUND;
}

//
// Retrieve the content of a file and convert to int
// where the filename is /<location>/<key>.txt
// The .txt extension is used so on Windows you can create
// the needed files in a data directory which you can than
// upload using the ESP8266 Sketch Data Upload
//
int getIntKey (String location, String key) {
  if (!SPIFFSStarted) {
    toolsSetup();
  }
  if (SPIFFS.exists("/"+location+"/"+key+".txt")) {
    File f = SPIFFS.open("/"+location+"/"+key+".txt","r");
    //
    // Read the first line of the file which is than returned
    //
    String line = f.readStringUntil('\n');
    return line.toInt();
  }
//
// The key was not found, so return NOKEYFOUND
//
  return NOINTKEYFOUND;
}

//
// Write a String in a file for retrieving later
// where the filename is /<location>/<key>.txt
//
void putStringKey (String location, String key, String value) {
  if (!SPIFFSStarted) {
    toolsSetup();
  }
  File f = SPIFFS.open("/"+location+"/"+key+".txt","w");
  f.print(value);
}

//
// Write an int in a file for retrieving later
// where the filename is /<location>/<key>.txt
//
void putIntKey (String location, String key, int value) {
  if (!SPIFFSStarted) {
    toolsSetup();
  }
  File f = SPIFFS.open("/"+location+"/"+key+".txt","w");
  f.print(value);
}

//
// Check whether the String value is there and if so
// read it. If not, return the default value and
// write the String value.
//
String getPutStringKey (String location, String key, String defaultValue) {
  String temp = getStringKey(location,key);
  if (temp==NOSTRINGKEYFOUND) {
    putStringKey(location,key,defaultValue);
    return defaultValue;
  } else {
    return temp;
  }
}

//
// Check whether the int value is there and if so
// read it. If not, return the default value and
// write the int value.
//
int getPutIntKey (String location, String key, int defaultValue) {
  int temp = getIntKey(location,key);
  if (temp==NOINTKEYFOUND) {
    putIntKey(location,key,defaultValue);
    return defaultValue;
  } else {
    return temp;
  }
}
