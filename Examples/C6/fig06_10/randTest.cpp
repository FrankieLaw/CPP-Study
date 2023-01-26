// RAND uses 16 bit integer -32,768 to 32,767 to represent the result.
// The results are fixed.  Each time the program runs, it returns the
// same sequence of result.
//
// The result can then be use to scale to a range of desire outcome.

#include <iostream>
using namespace std;

int main( ) {
    int min = 999999;
    int max = -999999;
    int temp = 0;

    for( int c = 0; c <= 100000; c++ ) {
        temp = rand( );

        if( temp < min ) 
            min = temp;

        if( temp > max ) {
            max = temp;
        }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}