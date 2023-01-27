// Compile this program in Visual Studio Code or any C++ IDE
// Set breakpoint at the [binaryMultiplier] function in Line 22
// Run the program in debug mode to see the call stack.

#include <iostream>
#include <cmath>
using namespace std;

int binaryMultiplier( int );

int main( ) {
    
    int binary = 0;

    binary = binaryMultiplier( 5 );

    cout << endl;
    cout << binary << endl;
    cout << endl;
}

int binaryMultiplier( int iteration ) {
    // Base formula
    if( iteration != 1 ) {
        return pow( 2, iteration ) + binaryMultiplier( iteration - 1 );
    } else {
        return pow( 2, iteration );
    }
}