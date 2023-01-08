// c05_Ex_5-10.cpp
//
// (Factorials) The factorial function is used frequently in probability problems. Using the
// definition of factorial in Exercise 4.34, write a program that uses a for statement to evaluate the factorials
// of the integers from 1 to 5. Print the results in tabular format. What difficulty might prevent
// you from calculating the factorial of 20?

#include <iostream>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    displayTestHeading( "Factorial 1 - 5" );

    int factorial = 1;

    for( int i = 1; i <= 5; i++ ) {
        factorial *= i;
    }

    cout << "\n" << "Factorial > " << factorial << "\n" << endl;
}