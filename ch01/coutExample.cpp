//coutExample.cpp by Aaron Johnson
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    /*
        cout is a C++ Class that overloads the bitwise left shift
        operater (<<) to provide syntactic convenience when 
        outputting information to standard out. However, using cout
        balloons the size of the file because it requires the entire
        cout class to print to standard out. 
    */
    cout << "Hello, World! |" << 2 * 7 << "| another String" << endl;

    return 0;
}