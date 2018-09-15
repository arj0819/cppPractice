//cArrays.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

int main (int argc, char** argv) {

    char s[] = {'s','t','r','i','n','g'};
    char t[] = "string";

    for(int i = 0; s[i]; ++i) {
        printf("Character is: %c\n",s[i]);
    }

    puts("");

    for(char * cp = t; *cp; ++cp) {
        printf("Character is: %c\n", *cp);
    }

    puts("");

    //Range-based for loop must use g++ compiler with flag '-std=c++11'
    for(char c : t) {
        if(c == 0) {
            puts("Character is: null terminator (0)");
            break;
        }
        printf("Character is: %c\n", c);
    }

    puts("");
    
    return 0;
}