# PAM_Tools

Some functions which speed up use of IFTTT and file system functions.

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
// IFTTT, IF This Than That, is a webbased service on ifttt.com that offers an
// API that allows you to create Maker events. With this call you can supply
// three optional values along with an event type. The event type is mandatory.
// There are four instances of this function, depending on whether you call
// them with no, one, two or three parameters.
//
void ifttt (String event, String value1, String value2, String value3)

You can read about it in more detail on https://piandmore.wordpress.com/tag/pam_tools