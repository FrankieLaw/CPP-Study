// c05_Ex_5-6.cpp
//
// (Averaging Integers) Write a program that uses a for statement to calculate the average of
// several integers. Assume the last value read is the sentinel 9999. For example, the sequence 10 8 11 7
// 9 9999 indicates that the program should calculate the average of all the values preceding 9999.
#include <iostream>
#include <iomanip>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    int input = 0;
    int sum = 0;
    int totalInput = 0;

    displayTestHeading( "Average of all inputs" );
    cout << "Enter a list of numbers" << endl;
    
    for( ; ; ) {
        do {
            cin >> input;

            if( !cin.good( ) ) {
                cout << "Invalid input" << endl;
                cin.clear( );
                cin.ignore( 256, '\n' );
            }
        } while( !cin.good( ) );

        if( input == 9999 ) {
            break;
        } else {
            sum += input;
            totalInput++;
        }
    }

    cout << endl;
    cout << "Total Input: " << totalInput << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average is " << setprecision(2) << fixed << static_cast<double>( sum / totalInput ) << endl;
}