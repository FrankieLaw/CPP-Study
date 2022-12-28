// Fig. 4.19: fig04_19.cpp
// Preincrementing and postincrementing
#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int c;

    displayTestHeading( "Testing Post Increment" );
    c = 5;
    cout << "Before: " << c << endl;
    cout << "Increment!: " << c++ << endl;
    cout << "After: " << c << endl;
    cout << endl;

    displayTestHeading( "Testing Pre Increment" );
    c = 5;
    cout << "Before: " << c << endl;
    cout << "Increment! " << ++c << endl;
    cout << "After: " << c << endl;
    cout << endl;
}