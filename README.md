# PAM_Tools

Some functions which make the file system more easy to use in the Arduino IDE.

The functions offered are:

//
// Retrieve the content of a file in a string
// where the filename is /<location>/<key>.txt
// The .txt extension is used so on Windows you can create
// the needed files in a data directory which you can than
// upload using the ESP8266 Sketch Data Upload
//
String getStringKey (String location, String key)

//
// Retrieve the content of a file and convert to int
// where the filename is /<location>/<key>.txt
// The .txt extension is used so on Windows you can create
// the needed files in a data directory which you can than
// upload using the ESP8266 Sketch Data Upload
//
int getIntKey (String location, String key)

//
// Write a String in a file for retrieving later
// where the filename is /<location>/<key>.txt
//
void putStringKey (String location, String key, String value)

//
// Write an int in a file for retrieving later
// where the filename is /<location>/<key>.txt
//
void putIntKey (String location, String key, int value)

You can read about it in more detail on https://piandmore.wordpress.com/tag/pam_tools
