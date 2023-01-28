// Fig. 6.20: fig06_20.cpp
// Initializing and using a reference.
#include <iostream>
using namespace std;

int main( ) {
    int x = 3;
    int z = 10;
    int &y = x;     // Notice that the reference symbol (&) appeared on the lvalue.
                    // Reference alias must be assigned upond declaration.
                    // Reference alias cannot be reassign afterwards.

    cout << endl;

    cout << "X and Y is the same" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    y = 7;
    cout << "x is modify using the reference y" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    y = z;
    cout << "Tried to set y to reference z, it doesn't work" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    cout << endl;
}
