// (Hypotenuse Calculations) Define a function hypotenuse that calculates the hypotenuse of
// a right triangle when the other two sides are given. The function should take two double arguments
// 
// and return the hypotenuse as a double. Use this function in a program to determine the hypotenuse
// for each of the triangles shown below.
//
// Triangle Side 1  Side 2
// 1        3.0     4.0
// 2        5.0     12.0
// 3        8.0     15.0


#include <iostream>
#include <iomanip>
#include <cmath>
#include "../../../src/tempCode.h"
using namespace std;

double calcHypotenuse( double, double );

int main( ) {
    double side1 = 5;
    double side2 = 7;

    displayTestHeading( "Calculate Hypotenuse" );

    cout << left << setw( 12 ) << "Triangle" 
         << left << setw( 10 ) << "Side 1" 
         << left << setw( 10 ) << "Side 2" 
         << left << setw( 15 ) << "Hypotenus" << endl;

    cout << left << setw( 12 ) << "1"
         << left << setw( 10 ) << setprecision( 2 ) << fixed << 3
         << left << setw( 10 ) << setprecision( 2 ) << fixed << 4 
         << left << setw( 15 ) << setprecision( 2 ) << fixed << calcHypotenuse( 3, 4 ) << endl;

    cout << left << setw( 12 ) << "2"
         << left << setw( 10 ) << setprecision( 2 ) << fixed << 5
         << left << setw( 10 ) << setprecision( 2 ) << fixed << 12 
         << left << setw( 15 ) << setprecision( 2 ) << fixed << calcHypotenuse( 5, 12 ) << endl;

    cout << left << setw( 12 ) << "3"
         << left << setw( 10 ) << setprecision( 2 ) << fixed << 8
         << left << setw( 10 ) << setprecision( 2 ) << fixed << 15 
         << left << setw( 15 ) << setprecision( 2 ) << fixed << calcHypotenuse( 8, 15 ) << endl;

    cout << endl;
}

double calcHypotenuse( double x, double y) {
    double retValue = sqrt( x * x + y * y );
    return retValue;
}
