//multiIncludes.cpp by Aaron Johnson

#include <cstdio>
#include "multiIncludeA.h"

using namespace std;

int main(int argc, char** argv) {

    structA a;
    a.member = 5;

    structB b;
    b.member = 10;

    printf("%d * %d = %d\n", a.member, b.member, a.member * b.member);
    return 0;
}