//funcReturns.cpp by Aaron Johnson
#include <cstdio>
#include <string>

using namespace std;

int func(int i) {
    puts("This is func()");
    return i * 2;
}

//returns a string reference (address).
//we don't want to allocate any large
//values on the stack with a call to this
//function, so we declare it as static.
//the return is a const string reference
//so we can't change the string in the 
//caller.
const string & returnString() {
    puts("This is returnString()");
    static string s = "This is a static string";
    return s;
}


int main(int argc, char** argv) {
    
    puts("This is main()");
    printf("returned value is %d\n", func(42));

    printf("returned value is %s\n", returnString().c_str());

    return 0;
}