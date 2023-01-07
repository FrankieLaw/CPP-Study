// c05_Ex_5-9.cpp
//
// (Product of Odd Integers) Write a program that uses a for statement to calculate and print
// the product of the odd integers from 1 to 15.
#include <iostream>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    displayTestHeading( "Product of Odd numbers" );

    int product = 1;

    for( int i = 1; i <= 15; i += 2 ) {
        product *= i;
    }

    cout << "\n" << "Product > " << product << "\n" << endl;
}