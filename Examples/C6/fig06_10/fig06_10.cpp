// Fig. 6.10: fig06_10.cpp
// Randomizing the die-rolling program.
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main( ) {
    unsigned seed;

    cout << "Enter seed: ";
    cin >> seed;
    srand( seed );

    for( int c = 1; c <= 10; c++ ) {
        cout << setw( 10 ) << ( 1 + rand( ) % 6 );

        if( c % 5 == 0 ) {
            cout << endl;
        }
    }
}