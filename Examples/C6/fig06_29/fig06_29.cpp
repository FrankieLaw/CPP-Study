// Fig. 6.29: fig06_29.cpp
// Demonstrating the recursive function factorial.
#include <iostream>
#include <iomanip>
using namespace std;

// Normal integer uses 32bits (4bytes) of memory
// Long integer uses a 64bits (8bytes) of memory
// unsigned means to hold non-negative values
unsigned long factorial( unsigned long );

int main( ) {
    cout << endl;

    for( int counter = 0; counter <= 10; counter++ ) {
        cout << setw( 2 ) << counter << "! = " << factorial( counter ) << endl;
    }

    cout << endl;
}

unsigned long factorial( unsigned long number ) {
    if( number <= 1 ) {
        return 1;
    } else {
        return number * factorial( number - 1 );
    }
}
