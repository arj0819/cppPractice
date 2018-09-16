//preprocMacros.cpp by Aaron Johnson

#include <cstdio>
using namespace std;


/*
  These are preprocessor macros. They use the #define
  keyword to create a macro which the preprocessor can
  see and use to substitute any use of it in the program.
  Using ONE in the program, the preprocessor will find it
  and replace it with its value, which is the integer 1. 
  Same goes for HELLO_STRING. Macros defined in this way
  are often used as constants. It is important to note
  that preprocessor macros CANNOT be addressed and will
  not be found in the symbol table because the 
  the preprocessor literally substitutes in any use of
  the macros with their corresponding values given in 
  their definition. 

  In general, the preprocessor directives begin with a 
  # as the FIRST character of the line. The # cannot be
  indented. Other preprocessor directives exist that do
  different things. 
*/
#define ONE 1
#define HELLO_STRING "Hello, World!"

int main(int argc, char** argv) {

    const int one = 1;
    printf("Preprocessor macro ONE is %d\n", ONE);
    printf("C++ declared const int one is %d\n", one);
    printf("Preprocessor macro HELLO_STRING is %s\n", HELLO_STRING);


    return 0;
}