// ex04_13.cpp
// (Gas Mileage) Drivers are concerned with the mileage obtained by their 
// automobiles. One driver has kept track of several trips by recording miles 
// driven and gallons used for each trip. Develop a C++ program that uses a 
// while statement to input the miles driven and gallons used for each
// trip. The program should calculate and display the miles per gallon obtained
// for each trip and print the combined miles per gallon obtained for all 
// tankfuls up to this point.
#include <iostream>
#include <iomanip>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int exitCode = -1;      // Sentinel Value
    float miles = 0;          // Current Miles driven
    float gallons = 0;        // Current Gallons used

    float sumMiles = 0;       // Total Miles Driven
    float sumGallons = 0;     // Total Gallons used

    displayTestHeading( "Gas Mileage Prompt" );

    do {
        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;

        if( miles != exitCode ) {
            cout << "Enter gallons used: ";
            cin >> gallons;

            sumMiles += miles;
            sumGallons += gallons;

            cout << "MPG this trip: " << setprecision( 2 ) << fixed <<  miles / gallons << endl;
            cout << "Total MPG: " << setprecision( 2 ) << fixed << sumMiles / sumGallons << endl << endl;
        }
    } while( miles != exitCode );
}