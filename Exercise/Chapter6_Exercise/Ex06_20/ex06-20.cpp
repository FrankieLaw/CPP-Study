#include <iostream>
#include "../../../src/tempCode.h"

using namespace std;

bool multiple( int, int );

int main( ) {
    displayTestHeading( "Calculate Multiples" );

    cout << "Is 1 multiple of 2? : " << multiple( 1, 2 ) << endl;
    cout << "Is 8 multiple of 2? : " << multiple( 8, 2 ) << endl;
    cout << "Is 9 multiple of 2? : " << multiple( 9, 2 ) << endl;
}

// ===========================================
//  bool Multiple( int, int ) 
//  Check if the second argument is multiple
//  Of the first.
// ===========================================
bool multiple( int x, int y ) {
    bool retValue = false;

    x % y == 0 
        ? retValue = true
        : retValue = false;

    return retValue;
}