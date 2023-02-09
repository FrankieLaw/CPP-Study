// (Random Numbers) Write statements that assign random integers to the variable n in the
// following ranges:
//
// a) 1 ≤n ≤2
// b) 1 ≤n ≤100
// c) 0 ≤n ≤9
// d) 1000 ≤n ≤1112
// e) –1 ≤n ≤1
// f) –3 ≤n ≤11
//
// =============================================
//  RANDOM GENERATOR THEORY
// =============================================
//  Q: Generate Randomly between -1 to 1
//     -1 to 1 consist of 3 numbers
//
//  Generate the number scale first
//  and then shift the number scale to where
//  you want the negative position to be.
//
//  Generated -> [ 1 ] [ 2 ] [ 3 ]
//  Shifted ->   [-1 ] [ 0 ] [ 1 ]
//
//  The problem with -> 1 + rand( ) % 10
//  It only works for positive number
//
//  When the number scale begins with a 0
//
//  The shift fails to generate the last number
//  creating an infinit loop.
//

#include <iostream>
#include <ctime>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {

    // PROGRAM SETTINGS
    int min = INT16_MAX; // Test for minimum value
    int max = INT16_MIN; // Test for maximum value

    int minValue = 1000;                           // Minimum Range
    int maxValue = 1112;                           // Maximum Range
    int scaleValue = abs(minValue - maxValue) + 1; // Range Difference

    int test = 0; // Value generated

    srand( time( 0 ) ); // Random Number Seed using Time Clock

    // Enter main program
    // Program will stop when it looped 10,000 times
    displayTestHeading("Random Number Range");
    cout << "Generate the range between " << minValue << " ~ " << maxValue << endl;

    for ( int c = 1; c <= 10000; c++ ) {
        test = minValue + rand( ) % scaleValue;

        if( c % 10 == 0 ) {
            cout << endl;
        }
        else {
            cout << test << "\t";
        }

        if( test < min ) {
            min = test;
        }

        if ( test > max ) {
            max = test;
        }
    }

    cout << endl;

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    cout << endl;
}