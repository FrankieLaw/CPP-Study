// Fig. 6.8: fig06_08.cpp
// Shifted and scaled random integers.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    displayTestHeading( "Dice Roll" );

    for( int c = 1; c <= 20; c++ ) {
        cout << setw(10) << ( 1 + rand( ) % 6 );

        if( c % 5 == 0 ) 
            cout << endl;
    }

    cout << endl;
}
