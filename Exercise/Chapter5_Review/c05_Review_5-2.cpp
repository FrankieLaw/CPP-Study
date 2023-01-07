// c05_Review_5-2.cpp
//
//
// Write a C++ statement or a set of C++ statements to accomplish each of the following:
// a) Sum the odd integers between 1 and 99 using a for statement. Assume the integer variables
// sum and count have been declared.
//
// b) Print the value 333.546372 in a 15-character field with precisions of 1, 2 and 3. Print
// each number on the same line. Left-justify each number in its field. What three values
// print?
//
// c) Calculate the value of 2.5 raised to the power 3 using function pow. Print the result with
// a precision of 2 in a field width of 10 positions. What prints?
//
// d) Print the integers from 1 to 20 using a while loop and the counter variable x. Assume
// that the variable x has been declared, but not initialized. Print only 5 integers per line.
// [Hint: When x % 5 is 0, print a newline character; otherwise, print a tab character.]
//
// e) Repeat Exercise 5.2(d) using a for statement.

#include <iostream>
#include <iomanip>
#include <cmath>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    int q1Sum = 0;

    for( int c = 1; c <= 99; c += 2 ) {
        q1Sum += c;
    }

    displayTestHeading( "5.2 - a" );
    cout << "Q1 Sum: " << q1Sum << "\n" << endl;

    displayTestHeading( "5.2 - b" );
    cout << "Q2 Value: " << setprecision(1) << setw( 15 ) << fixed << left << 333.546372 << " " 
                         << setprecision(2) << setw( 15 ) << fixed << left << 333.546372 << " " 
                         << setprecision(3) << setw( 15 ) << fixed << left << 333.546372 << "\n" << endl;

    displayTestHeading( "5.2 - c" );
    cout << "Q3 Answer: " << setprecision(2) << setw(10) << fixed << pow( 2.5, 3 ) << "\n" << endl;


    displayTestHeading( "5.2 - d" );
    int x = 1;

    while( x <= 20 ) {
        cout << x;

        if( x % 5 == 0 ) {
            cout << "\n";    
        } else {
            cout << "\t";
        }

        x++;
    }
    cout << endl;

    displayTestHeading( "5.2 - e" );
    for( int x = 1; x <= 20; x++ ) {
        cout << x;

        if( x % 5 == 0 ) {
            cout << "\n";    
        } else {
            cout << "\t";
        }
    }
}