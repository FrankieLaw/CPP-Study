// Fig. 6.13: fig06_13.cpp
// square function used to demonstrate the function
// call stack and activation records.
#include <iostream>
using namespace std;

int square( int );

int main( ) {
    int a = 10;

    cout << endl;
    cout << a << " squared: " << square( a ) << endl;
    cout << endl;
}

int square( int x ) {
    return x * x;
}
