//loops.cpp by Aaron Johnson
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char** argv) {

    int a[] = {1, 2, 3, 4, 5};
    int i = 0;

    puts("while");
    while (i < 5) {
        printf("element %d has a value of %d\n", i, a[i]);
        i++;
    }

    puts("\ndo while");
    i = 0;
    do {
        printf("element %d has a value of %d\n", i, a[i]);
        i++;
    } while (i < 5);

    puts("\nfor");
    for (int i = 0; i < 5; i++) {
        printf("element %d has a value of %d\n", i, a[i]);
    }

    puts("\nfor with pointer arithmetic");
    char s[] = "string";
    for (char * cp = s; *cp; cp++) {
        printf("element %c\n", *cp);
    }

    puts("\nrange-based for");
    for (int value : a) {
        printf("element has a value of %d\n", value);
    }

    puts("\nrange-based for");
    for (char letter : s) {
        if (letter == 0) {
            break;
        }
        printf("letter has a value of %c\n", letter);
    }

    string cppString = "C++ String"; //NOTE: Doesn't require null terminator test because C++ Strings don't use null terminator!
    puts("\nrange-based for w/ C++ String");
    for (char letter : cppString) {
        printf("letter has a value of %c\n", letter);
    }

    return 0;
}