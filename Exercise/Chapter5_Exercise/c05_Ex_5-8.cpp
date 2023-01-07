// c05_Ex_5-6.cpp
//
// (Find the Smallest Integer) Write a program that uses a for statement to find the smallest
// of several integers. Assume that the first value read specifies the number of values remaining.
#include <iostream>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    int series = 0;
    int input = 0;
    int smallest = INT_MAX;

    displayTestHeading( "Find the Smallest of all Inputs" );
    cout << "Enter the number of inputs: ";
    cin >> series;

    displayTestHeading( "Enter Inputs" );
    for( ; ; ) {
        do {
            cout << " > ";
            cin >> input;

            if( !cin.good( ) ) {
                cout << "Invalid input" << endl;
                cin.clear( );
                cin.ignore( 256, '\n' );

            } else {
                series--;

                if( input < smallest ) {
                    smallest = input;
                }
            }
        } while( !cin.good( ) );

        if( series == 0 ) break;
    }

    cout << "\n" << "The smallest input: " << smallest << "\n" << endl;
}