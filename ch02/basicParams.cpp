//basicParams.cpp by Aaron Johnson
#include <cstdio>
#include <string>
using namespace std;

void funcPassByValue(int i) {
    printf("This is funcPassByValue(int i) and i is %d\n", i);
}

void funcPassByRef(int & i) {
    printf("This is funcPassByRef(int & i) and i is %d\n", i);
    puts("funcPassByRef(int & i) is changing i to 73...");
    i = 73;
}

void funcPassByConstRef(const int & i) {
    printf("This is funcPassByConstRef(const int & i) and i is %d\n", i);
    puts("funcPassByConstRef(const int & i) cannot change i because it is const");
}


void funcPassByConstStringRef(const string & fs) {
    printf("value is %s\n", fs.c_str());
}


int main(int argc, char** argv) {

    int i = 42;
    puts("This is main()");
    puts("i = 42");
    funcPassByValue(i);
    funcPassByRef(i);
    printf("after funcPassByRef(int & i), i is now %d\n", i);
    funcPassByConstRef(i);
    printf("after funcPassByConstRef(const int & i), i is still %d\n", i);

    puts("\nNow time for a string!");
    string s = "Hello I'm a string";
    funcPassByConstStringRef(s);
    printf("string is %s\n", s.c_str());

    return 0;
}