//switchCase.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

int main(int argc, char** argv) {

    const int iONE = 1;
    const int iTWO = 2;
    const int iTWENTY = 20;
    const int iTHREE = 3;
    const int iFOUR = 4;
    
    int x = 2;

    switch(x) {
        case iONE:
            puts("one");
            break;
        case iTWO:
        case iTWENTY:
            puts("two or twenty");
            break;
        case iTHREE:
            puts("three");
            break;
        case iFOUR:
            puts("four");
            break;

        default:
            puts("default");
            break;
    }

    return 0;
}