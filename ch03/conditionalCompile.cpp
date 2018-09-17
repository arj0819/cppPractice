//conditionalCompile.cpp by Aaron Johnson
#include <cstdio>

//defining FOO will tell conditionalCompile.h to use NUMBER 47,
//not defining FOO will tell conditionalCompile.h to use NUMBER 2.
#define FOO
#include "conditionalCompile.h"

using namespace std;

int main(int argc, char** argv) {

    printf("Number is %d\n", NUMBER);

    return 0;
}