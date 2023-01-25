// Fig. 6.9: fig06_09.cpp
// Rolling a six-sided die 6,000,000 times.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int frequency1 = 0;
    int frequency2 = 0;
    int frequency3 = 0;
    int frequency4 = 0;
    int frequency5 = 0;
    int frequency6 = 0;

    int face;

    for( int roll = 1; roll <= 6000000; roll++ ) {
        face = 1 + rand( ) % 6;

        switch( face ) {
            case 1:
                frequency1++;
                break;

            case 2:
                frequency2++;
                break;

            case 3:
                frequency3++;
                break;

            case 4:
                frequency4++;
                break;

            case 5:
                frequency5++;
                break;

            case 6:
                frequency6++;
                break;

            default:
                cout << "Program should never get here!" << endl;
        }
    }

    displayTestHeading( "Dice Roll Frequency" );
    
    cout << "Face" << setw( 13 ) << "Frequency" << endl;
    cout << "   1" << setw( 13 ) << frequency1 << endl;
    cout << "   2" << setw( 13 ) << frequency2 << endl;
    cout << "   3" << setw( 13 ) << frequency3 << endl;
    cout << "   4" << setw( 13 ) << frequency4 << endl;
    cout << "   5" << setw( 13 ) << frequency5 << endl;
    cout << "   6" << setw( 13 ) << frequency6 << endl;

    cout << endl;
}