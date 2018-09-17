//macroExpansion.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

//parameterized macros
#define MULT(a,b)(a * b)
#define MAX(a,b) (a > b ? a : b)

/*
Usually in C++, templates are the preferred way
of handling this type of functionality because
paramaterized macros are literal text expansions
that the preprocessor substitutes in the code 
before the compiler ever sees it, thus leading
to some issues when using function calls as 
parameters in the macro.
*/

int main(int argc, char** argv) {

    int ia = 5;
    int ib = 7;

    printf("resulting value of MULT(5,7) is %d\n", MULT(ia, ib));
    printf("resulting value of MAX(5,7) is %d\n", MAX(ia, ib));

    return 0;
}