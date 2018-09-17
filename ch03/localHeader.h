//localHeader.h by Aaron Johnson

/*
    This implementation is known as an include
    guard. Using the preprocessor directives in
    this way prevents multiple inclusion of 
    header files by allowing the file to only
    be defined once. 
*/

//#ifndef = if not defined
#ifndef LOCALHEADER_H_
#define LOCALHEADER_H_

//preprocessor MACRO
#define ONE 1

//These constants can be seen and used in any
//cpp file which includes this header file.

const int _iOne = 1;
const char _sOne[] = "one";

//#endif closes the ifndef section, signifying
//we are done with the ifndef block.
#endif /* LOCALHEADER_H_ */