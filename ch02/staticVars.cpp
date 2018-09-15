//staticVars.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

void func() {

    //static variable grabs memory from the heap instead
    //being stored in a stack frame. This way, the value
    //of static vars is persistent across function calls
    static int i = 5; 
    printf("i is %d\n", ++i);
    i = 42;
    printf("i is %d\n", ++i);

}

int main(int argc, char** argv) {

    puts("this is main()");
    func();
    func();   

    return 0;
}