// c05_Ex_5-19.cpp
//
// (Calculating π) Calculate the value of π from the infinite series
// Print a table that shows the approximate value of π after each 
// of the first 1000 terms of this series

#include <iostream>
#include <iomanip>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    displayTestHeading( "Pie Infinite Series");

    int termCnt = 0;            // Keep track of how many terms have been reached (every 1000)
    double pie = 0.0;           // Initial starting value
    double termInc = 3;         // Denominator tracker

    bool operation = true;      // True = Addition, False = Subtraction


    for( termCnt = 1; termCnt <= 10000000; termCnt++ ) {
        operation 
            ? pie += 4 / termInc 
            : pie -= 4 / termInc;

        operation = !operation;

        if( termCnt % 25000 == 0 ) {
            cout << setw( 20 ) << setprecision( 15 ) << left 
                 << static_cast<double>( 4 - pie ) << endl;
        }

        termInc += 2;
    }

    cout << endl;
}