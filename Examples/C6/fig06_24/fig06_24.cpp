// Fig. 6.24: fig06_24.cpp
// Overloaded functions.
#include <iostream>
using namespace std;

int square( int x ) {
    cout << "Square of integer " << x << " is ";
    return x * x;
}

double square( double x ) {
    cout << "Square of double " << x << " is ";
    return x * x;
}

int main( ) {
    cout << endl;

    cout << square( 7 );
    cout << endl;
    cout << square( 10.5 );
    cout << endl;

    cout << endl;
}