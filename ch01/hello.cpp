// hello.cpp by Aaron Johnson

// vv  preprocessor directives  vv
#include <cstdio> //grabs a file as if it were typed right here
#include <iostream>
// ^^  preprocessor directives  ^^

// vv  namespaces  vv
using namespace std; //uses namespace to find function definitions
// ^^  namespaces  ^^

//main function is the entry point into execution of a C++ program
int main (int argc, char** argv) {
    puts("Hello, World!");

    cout << "Hellow, World!\n"; // std::cout is a C++ class found in <iostream>

    return 0; //main function must return an int. 0 means exit with success.
}