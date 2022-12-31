// ex04_Exercise_4-34c.cpp
//
// Write a program that computes the value of ex by using the formula:
//
// e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ...
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

double getExponential( int base, int pow ) {
    double sum = 1;

    while( pow > 0 ) {
        sum *= base;
        pow--;
    }

    return sum;
}


int main( ) {
    int input = 0;              // User's selected Input
    
    int n = 0;                  // n(th) term
    int base = 0;               // The base for the Exponential
    double eFunction = 0;       // Final Answer

    displayTestHeading( "Calculating Exponential Function" );
    cout << "Enter a number of Precision: ";
    cin >> input;       // Assume base of 4
    n = input;
    base = input;

    while( n != 0 ) {
        eFunction += ( getExponential( base, n ) / getFactorial( n ) );
        n--;
    }
   
    eFunction += 1;

    cout << setprecision( 2 ) << fixed 
         << "Exponential Function of " << input << " is " << eFunction << endl;
    cout << endl;
}