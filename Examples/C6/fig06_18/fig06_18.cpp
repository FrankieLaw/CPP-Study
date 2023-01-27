// Fig. 6.18: fig06_18.cpp
// Using an inline function to calculate the volume of a cube.
#include <iostream>
using namespace std;

inline double cube( const double side ) {
    return side * side * side;
}

int main( ) {
    double sideValue;
    
    cout << endl;
    
    cout << "Enter the side length of your cube: ";
    cin >> sideValue;

    cout << "Volumn of cube with side " << sideValue
         << " is " << cube( sideValue ) << endl;

    cout << endl;
}