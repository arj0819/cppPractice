//loops.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

int main(int argc, char** argv) {

    int a[] = {1, 2, 3, 4, 5};
    int i = 0;

    while (i < 5) {
        printf("element %d has a value of %d\n", i, a[i]);
        i++;
    }

    puts("");
    i = 0;

    do {
        printf("element %d has a value of %d\n", i, a[i]);
        i++;
    } while (i < 5);

    return 0;
}