// ex04_Exercise_4-34a.cpp
//
// Write a program that reads a nonnegative integer and computes and prints its factorial.
#include <iostream>
#include <iomanip>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int input = 0;
    int factorial = 0;
    double sum = 1;

    displayTestHeading( "Calculating Factorial" );
    cout << "Enter a number for Factorial: ";
    cin >> input;
    factorial = input;

    while( input != 0 ) {
        sum *= input;
        input--;
    }

    cout << setprecision( 0 ) << fixed << "Factorial of " << factorial << " is " << sum << endl;
    cout << endl;

}