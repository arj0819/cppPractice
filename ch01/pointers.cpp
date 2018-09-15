//pointers.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

int main (int argc, char** argv) {

    int x = 7;
    int y = 42;
    int *ip = &x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n\n", *ip);

    x = 73;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n\n", *ip);

    ip = &y;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n\n", *ip);

    return 0;
}