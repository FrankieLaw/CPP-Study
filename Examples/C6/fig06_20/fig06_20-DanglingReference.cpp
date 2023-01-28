// fig06_20-DanglingReference.cpp
// Demonstrating a return reference from a function call
// result in logic errors.
#include <iostream>
using namespace std;


// int& means the return type is a int reference
// This is not possible because, automatic variable is destroyed
// upon function completion.
int& test( );

int& test( ) {
    static int n = 10;  // This is the correct way of retaining n
    //int n = 10;         // This line will generate an error
    return n;
}

int main( ) {
    int &i = test( );

    cout << i << endl;
}