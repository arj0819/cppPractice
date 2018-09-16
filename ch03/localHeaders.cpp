//localHeaders.cpp by Aaron Johnson

// #include is an include preprocessor directive
// <header> indicates a system level header file (system specific)
// "header" indicates a local level header file (project specific)
#include <cstdio>
#include "localHeader.h"

using namespace std;

int main(int argc, char** argv) {

    printf("preprocessor macro: %d\n", ONE);
    printf("integer constant: %d\n", _iOne);
    printf("character string constant: %s\n", _sOne);
    return 0;
}