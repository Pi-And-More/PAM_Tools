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
// Retrieve the content of a file and convert to float
// where the filename is /<location>/float/<key>.txt
// The .txt extension is used so on Windows you can create
// the needed files in a data directory which you can than
// upload using the ESP8266 Sketch Data Upload
//
float getFloatKey (String location, String key)

//
// Retrieve the content of a file and convert to bool
// where the filename is /<location>/bool/<key>.txt
// The .txt extension is used so on Windows you can create
// the needed files in a data directory which you can than
// upload using the ESP8266 Sketch Data Upload
//
bool getBoolKey (String location, String key)

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

//
// Write a float in a file for retrieving later
// where the filename is /<location>/float/<key>.txt
//
void putFloatKey (String location, String key, float value)

//
// Write a bool in a file for retrieving later
// where the filename is /<location>/bool/<key>.txt
//
void putBoolKey (String location, String key, bool value)

//
// Check whether the String value is there and if so
// read it. If not, return the default value and
// write the String value.
//
String getPutStringKey (String location, String key, String defaultValue)

//
// Check whether the int value is there and if so
// read it. If not, return the default value and
// write the int value.
//
int getPutIntKey (String location, String key, int defaultValue)

//
// Check whether the float value is there and if so
// read it. If not, return the default value and
// write the float value.
//
float getPutFloatKey (String location, String key, float defaultValue)

//
// Check whether the bool value is there and if so
// read it. If not, return the default value and
// write the bool value.
//
bool getPutBoolKey (String location, String key, bool defaultValue)

You can read about it in more detail on https://piandmore.wordpress.com/tag/pam_tools
