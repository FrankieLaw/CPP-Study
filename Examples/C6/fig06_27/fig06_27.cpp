// Fig. 6.27: fig06_27.cpp
// Function template maximum test program.
#include <iostream>
#include "maximum.h"
using namespace std;

int main( ) {

    // =========================
    // TEMPLATE FOR INTEGERS
    // =========================
    int int1, int2, int3;

    cout << "\nInput three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "The maximum integer value is: " 
         << maximum( int1, int2, int3 ) << endl;

    
    // =========================
    // TEMPLATE FOR DOUBLE
    // =========================
    double double1, double2, double3;

    cout << "\nInput three double values: ";
    cin >> double1 >> double2 >> double3;

    cout << "The maximum double value is: " 
         << maximum( double1, double2, double3 ) << endl;


    // =========================
    // TEMPLATE FOR CHAR
    // =========================
    char char1, char2, char3;

    cout << "\nInput three char values: ";
    cin >> char1 >> char2 >> char3;

    cout << "The maximum char value is: " 
         << maximum( char1, char2, char3 ) << endl;

    cout << endl;
}