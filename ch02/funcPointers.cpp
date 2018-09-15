//funcPointers.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

void func() {
    puts("this is func()");

}


int main(int argc, char** argv) {

    void (*fp)() = func;
    puts("this is main()");
    func();
    fp();
    (*fp)();

    return 0;
}