//variadicFuncs.cpp by Aaron Johnson
#include <cstdio>
#include <cstdarg> //provides va_list class and needed macros
using namespace std;

/*
    a C++ MACRO is a preprocessor directive
    that defines a macro and what it should
    do. Example:

    #define MACRO(a,b) (a * b)

    So, whenever MACRO(a,b) is used in the code,
    the preprocessor immediately replaces it
    with (a * b), using the supplied arguments
    as the values for a and b.
*/

//first arg is the count of remaining args
// ... is remaining args, must be doubles
double average(const int count, ...) {
    //va_list is a C++ CLASS.
    va_list ap;
    int i;
    double total = 0.0;

    //va_start is a C++ MACRO
    //(to be used with an instance of va_list)
    va_start(ap, count);
    for(i = 0; i < count; i++) {
    //va_arg is a C++ MACRO
    //(to be used with an instance of va_list)
        total += va_arg(ap, double);
    }
    //va_end is a C++ MACRO
    //(to be used with an instance of va_list)
    va_end(ap);
    return total/count;
}

//works like print, format first, then args
int message(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int rc = vfprintf(stdout, fmt, ap);
    puts("");
    va_end(ap);
    return rc;
}

int main(int argc, char** argv) {
    message("This is a message.");
    message("Average: %lf", average(5, 25.0, 35.7, 50.1, 127.6, 75.0));

    return 0;
}