//variables.cpp by Aaron Johnson

#include <cstdio>
using namespace std;

int main (int argc, char** argv) {

    int i = 7; //definition and initialization of variable i
    const int j = 8; //constant qualifier means value of j cannot be changed
    printf("The value of i is %d\n", i);
    printf("The value of j is %d\n", j);

    return 0;
}