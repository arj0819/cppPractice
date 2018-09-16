//jumpTable.cpp by Aaron Johnson

#include <cstdio>
using namespace std;

//FUNCTION DECLARATIONS

const char* prompt();
int jump(const char*);

void fa() {
    puts("this is fa()");
}
void fb() {
    puts("this is fb()");
}
void fc() {
    puts("this is fc()");
}
void fd() {
    puts("this is fd()");
}
void fe() {
    puts("this is fe()");
}

//FUNCTION POINTER ARRAY
//Stores the address of these functions inside the array
//NOTE: to use nullptr, compile with the -std=c++0x flag!
void (*funcs[])() = {fa, fb , fc, fd, fe, nullptr};

//MAIN
int main(int argc, char** argv) {

    while(jump(prompt()));

    puts("\nDone.");
    return 0;
}

//PROMPT
const char* prompt() {
    puts("Choose an option:");
    puts("1. Function fa()");
    puts("2. Function fb()");
    puts("3. Function fc()");
    puts("4. Function fd()");
    puts("5. Function fe()");
    puts("Q. Quit");
    printf(">> ");

    fflush(stdout);                     // flush stdout buffer after prompt
    const int bufferSize = 16;          // constant for buffer size
    static char response[bufferSize];   // static storage for response buffer
    fgets(response, bufferSize, stdin); // get response from console
}

//JUMP
int jump(const char* rs) {
    char code = rs[0];
    if(code == 'q' || code == 'Q') {
        return 0;
    }

    //count the length of the funcs array
    int func_length = 0;
    while(funcs[func_length] != NULL) {
        func_length++;
    }

    int i = (int)code - '0'; //convert ASCII numeral to int
    i--;                     //list is zero-based
    if (i < 0 || i >= func_length) {
        puts("invalid choice");
        return 1;
    } else {
        funcs[i]();
        return 1;
    }
}