// ex04_Exercise_4-34b.cpp
//
// Write a program that estimates the value of the mathematical constant e by using the
// formula:
//
// e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
//
#include <iostream>
#include <iomanip>
#include "../../../src/tempCode.h"
using namespace std;

double getFactorial( int f ) {
    double sum = 1;

    while( f != 0 ) {
        sum *= f;
        f--;
    }

    return sum;
}


int main( ) {
    int input = 0;
    int factorial = 0;
    double eulerNum = 0;

    displayTestHeading( "Calculating Euler's Number" );
    cout << "Enter a number of Precision: ";
    cin >> input;
    factorial = input;

    while( input != 0 ) {
        eulerNum += 1 / getFactorial( input );
        input--;
    }
   
    eulerNum += 1;

    cout << setprecision( 2 ) << fixed 
         << "Euler Number of " << factorial << " is " << eulerNum << endl;
    cout << endl;
}