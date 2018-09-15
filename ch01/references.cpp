//references.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

int main (int argc, char** argv) {

    int x = 7;
    int *ip = &x;
    int &y = x; //defining and initializing a reference y. In this case, y is referencing whatever x is.

    puts("\nint x = 7;\n*ip = &x;\n&y = x;\n");
    printf("The value of x is %d\n", x);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of y is %d\n\n", y);

    x = 42;
    puts("x = 42;\n");
    printf("The value of x is %d\n", x);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of y is %d\n\n", y);

    y = 73;
    puts("y = 73;\n");
    printf("The value of x is %d\n", x);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of y is %d\n\n", y);
    
    int z = 149;
    ip = &z;
    puts("int z = 149;\nip = &z;\n");
    printf("The value of x is %d\n", x);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n\n", z);

    y = z;
    puts("y = z;\n");
    printf("The value of x is %d\n", x);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n\n", z);

    return 0;
}