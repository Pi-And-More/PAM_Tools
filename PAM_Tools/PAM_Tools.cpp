//
// include header of PAM_Tools
//
// created by PI and more, piandmore@j-tools.net
//
#include <PAM_Tools.h>

//
// include the PAM_WiFi library and the PAM_Defines library
//
#include <PAM_WiFi.h>
#include <PAM_Defines.h>

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

//
// IFTTT, IF This Than That, is a webbased service on ifttt.com that offers an
// API that allows you to create Maker events. With this call you can supply
// three optional values along with an event type. The event type is mandatory.
// There are four instances of this function, depending on whether you call
// them with no, one, two or three parameters.
//
void ifttt (String event, String value1, String value2, String value3) {
  //
  // The getURL function is used to handle the API call
  //
  getURL("maker.ifttt.com","/trigger/"+event+"/with/key/"+IFTTTKEY+"?value1="+value1+"&value2="+value2+"&value3="+value3);
}

void ifttt (String event, String value1, String value2) {
  ifttt(event,value1,value2,"");
}

void ifttt (String event, String value1) {
  ifttt(event,value1,"","");
}

void ifttt (String event) {
  ifttt(event,"","","");
}
