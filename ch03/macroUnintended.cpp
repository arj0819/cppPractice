//macroUnintended.cpp by Aaron Johnson

#include <cstdio>
using namespace std;

#define MAX(a, b) (a > b ? a : b)

int increment() {
    static int i = 42;
    i += 5;
    printf("returning: %d\n", i);
    return i;
}

int main(int argc, char** argv) {

    int x = 50;

    //using macros in this way causes unintended results.
    //In C++, templates are a better way of handling this.
    printf("max of %d and %d is: %d\n", x, increment(), MAX(x, increment()));
    printf("max of %d and %d is: %d\n", x, increment(), MAX(x, increment()));

    return 0;
}