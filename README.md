# PAM_Tools

Some functions which make the file system more easy to use.

The functions offered are:

//
// Retrieve the content of a file in a string
// where the filename is /<location>/<key>.txt
// The .txt extension is used so on Windows you can create
// the needed files in a data directory which you can than
// upload using the ESP8266 Sketch Data Upload
//
String getStringKey (String location, String key)

You can read about it in more detail on https://piandmore.wordpress.com/tag/pam_tools