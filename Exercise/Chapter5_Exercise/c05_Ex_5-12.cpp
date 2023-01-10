// c05_Ex_5-12.cpp
//
// (Drawing Patterns with Nested for Loops) Write a program that uses for statements to
// print the following patterns separately, one below the other. Use for loops to generate the patterns.
// All asterisks (*) should be printed by a single statement of the form cout << '*'; (this causes the
// asterisks to print side by side). [Hint: The last two patterns require that each line begin with an appropriate
// number of blanks. Extra credit: Combine your code from the four separate problems into
// a single program that prints all four patterns side by side by making clever use of nested for loops.]
//
// (a)        (b)                 (c)             (d)
// *          **********          **********              *
// **          *********          *********              **
// ***          ********          ********              ***
// ****          *******          *******              ****
// *****          ******          ******              *****
// ******          *****          *****              ******
// *******          ****          ****              *******
// ********          ***          ***              ********
// *********          **          **              *********
// **********          *          *              **********

#include <iostream>
#include <iomanip>
#include <cmath>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {

    displayTestHeading( "Question A" );
    for( int row = 1; row <= 10; row++ ) {
        for( int col = 1; col <= row; col++ ) {
            cout << "*";
        }

        cout << "\n";
    }
    cout << endl;


    displayTestHeading( "Question B" );
    for( int row = 0; row < 10; row++ ) {
        for( int col = 0; col < 10; col++ ) {
            if( col >= 0 && col < row) {
                cout << " ";
            } else {
                cout << "*";
            }
        }

        cout << "\n";
    }
    cout << endl;


    displayTestHeading( "Question C" );
    for( int row = 1; row <= 10; row++ ) {
        for( int col = 1; col <= ( 11 - row ); col++ ) {
            cout << "*";
        }

        cout << "\n";
    }
    cout << endl;


    displayTestHeading( "Question D" );
    for( int row = 0; row < 10; row++ ) {
        for( int col = 0; col < 10; col++ ) {
            if( col >= 0 && col < ( 9 - row ) ) {
                cout << " ";
            } else {
                cout << "*";
            }
        }

        cout << "\n";
    }
    cout << endl;
}
