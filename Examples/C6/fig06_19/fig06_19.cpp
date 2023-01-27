// Fig. 6.19: fig06_19.cpp
// Comparing pass-by-value and pass-by-reference with references.
#include <iostream>
using namespace std;

int squareByValue( int );
void squareByReference( int & );

int main( ) {
    int x = 2;
    int z = 4;

    cout << endl;
    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: " 
         << squareByValue( x ) << endl;
    cout << "x = " << x << " after squareByValue\n" << endl;

    cout << "z = " << z << " before squareByReference\n";
    squareByReference( z );
    cout << "z = " << z << " after squareByReference\n" << endl;
    cout << endl;
}

int squareByValue( int number ) {
    return number *= number;
}

void squareByReference( int &numberRef ) {
    numberRef *= numberRef;
}
