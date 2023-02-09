// (Exponentiation) Write a function integerPower(base, exponent) that returns the value of
// base exponent
//
// For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero
// integer and that base is an integer. Do not use any math library functions.

#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int integerPower( int, int );

int main( ) {
    displayTestHeading( "Calculate Base Exponent" );

    cout << integerPower( 2, 2 ) << endl;       // 4
    cout << integerPower( 2, 10 ) << endl;      // 1024
    cout << endl;
}

int integerPower( int base, int exp ) {
    int retValue = base;

    for( int c = 1; c < exp; c++ ) {
        retValue *= base;
    }

    return retValue;
}
