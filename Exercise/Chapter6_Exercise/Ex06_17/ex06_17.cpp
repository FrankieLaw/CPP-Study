// (Random Numbers) Write a single statement that prints a number at random from each of
// the following sets:
// a) 2, 4, 6, 8, 10.
// b) 3, 5, 7, 9, 11.
// c) 6, 10, 14, 18, 22.

#include <iostream>
#include <ctime>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int randomValue = 0;
    int reptition = 20;

    srand( time( 0 ) );

    displayTestHeading( "A => 2, 4, 6, 8, 10" );
    for( int i = 1; i <= reptition; i++ ) {
        randomValue = ( 1 + rand( ) % 5 ) * 2;

        if( i % 10 == 0 )
            cout << endl;
        else
            cout << randomValue << "\t";
    }

    displayTestHeading( "B => 3, 5, 7, 9, 11" );
    for( int i = 1; i <= reptition; i++ ) {
        randomValue = ( 1 + rand( ) % 5 ) * 2 + 1;

        if( i % 10 == 0 )
            cout << endl;
        else
            cout << randomValue << "\t";
    }

    displayTestHeading( "C => 6, 10, 14, 18, 22" );
    for( int i = 1; i <= reptition; i++ ) {
        randomValue = ( 1 + rand( ) % 5 ) * 4 + 2;

        if( i % 10 == 0 )
            cout << endl;
        else
            cout << randomValue << "\t";
    }
    cout << endl;
}