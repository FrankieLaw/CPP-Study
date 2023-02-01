// Fig. 6.24: fig06_24.cpp
// Overloaded functions.
#include <iostream>
using namespace std;


// In assembly language "fig06_24.s"
// Each overloaded function have their own signature based on the name, and parameter listed.
// _Z6squarei is the integer version of the overloaded function
// _Z6squared is the double version of the overloaded function
// _Z6squarec is the char version
//
// _Z - is the prefix of overload function
// 6  - The number 6 is the number of character of the function
// i  - Is the parameter type.
int square( int x ) {
    cout << "Square of integer " << x << " is ";
    return x * x;
}

double square( double x ) {
    cout << "Square of double " << x << " is ";
    return x * x;
}

char square( char x ) {
    cout << "Square of Char " << x << " is ";
    return '?';
}

int main( ) {
    cout << endl;

    cout << square( 7 );
    cout << endl;
    cout << square( 10.5 );
    cout << endl;
    cout << square( 'c' );

    cout << endl;
}