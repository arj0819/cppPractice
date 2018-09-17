//lineContinuation.cpp by Aaron Johnson

#include <cstdio>
using namespace std;

/*
When using preprocessor directives, you can use the
\(newline) to indicate to the preprocessor that the 
directive continues on the next line. This makes 
long directives easier to read.
*/

#define SWAP(a,b) do {          \
                        a ^= b; \
                        b ^= a; \
                        a ^= b; \
                  } while (0)


int main(int argc, char** argv) {

    int x = 5;
    int y = 10;
    printf("x is %d, y is %d\n", x, y);
    SWAP(x,y);
    printf("x is %d, y is %d\n", x, y);

    return 0;
}