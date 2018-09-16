//operatorOverload.cpp by Aaron Johnson
#include <cstdio>
using namespace std;

//definition of class A. We will get into
//more about C++ classes in next chapter.
class A {
    int a;
public:
    A(const int &a) : a(a) {}
    const int & value() const {return a;}
};

//defined with references because passing entire
//values bogs down the stack with extra, unnecessary memory usage.
int operator + (const A& lhs, const A& rhs) {
    //in real program, operaters usually never print messages.
    puts("operator + for class A");
    //common practice to label left and right hand sides.
    return lhs.value() + rhs.value();
}

int main(int argc, char** argv) {
    //two variables of class A constructed with initial values.
    A a(7);
    A b(42);
    //+ operator is overloaded because operands are of type class A
    //and the definition for this operator is above.
    printf("add them up! %d\n", a + b);

    return 0;
}