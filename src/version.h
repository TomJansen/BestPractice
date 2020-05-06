#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Software Status
	static const char STATUS[] = "Alpha";
	static const char STATUS_SHORT[] = "a";
	
	//Standard Version Type
	static const long MAJOR = 1;
	static const long MINOR = 1;
	static const long BUILD = 223;
	static const long REVISION = 1212;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 390;
	#define RC_FILEVERSION 1,1,223,1212
	#define RC_FILEVERSION_STRING "1, 1, 223, 1212\0"
	static const char FULLVERSION_STRING[] = "1.1.223.1212";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 0;
	

}
#endif //VERSION_h
