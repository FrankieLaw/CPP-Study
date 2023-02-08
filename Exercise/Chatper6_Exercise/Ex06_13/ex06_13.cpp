// (Rounding Numbers) An application of function floor is rounding a value to the nearest
// integer. The statement
// y = floor( x + .5 );
//
// rounds the number x to the nearest integer and assigns the result to y. Write a program that reads
// several numbers and uses the preceding statement to round each of these numbers to the nearest
// integer. For each number processed, print both the original number and the rounded number

#include <iostream>
#include <cmath>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int numOfInput = 7;
    float input = 0.0;
    float roundedInput = 0.0;

    displayTestHeading( "Floor 7 Inputs" );

    for( int i = 0; i < numOfInput; i++ ) {
        cout << i + 1 << " -> Enter a number to floor: ";
        cin >> input;

        roundedInput = floor( input );

        cout << "Before: " << input << "\tAfter: " << roundedInput << endl;
        cout << endl;
    }
}