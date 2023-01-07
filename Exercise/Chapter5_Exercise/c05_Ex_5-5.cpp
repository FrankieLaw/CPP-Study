// c05_Ex_5-5.cpp
//
// (Summing Integers) Write a program that uses a for statement to sum a sequence of integers.
// Assume that the first integer read specifies the number of values remaining to be entered. Your
// program should read only one value per input statement. A typical input sequence might be
// 5 100 200 300 400 500

#include <iostream>
#include <string>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    int sum = 0;
    int input = 0;
    int temp = 0;       // temporary input value

    displayTestHeading( "Sum of all inputs" );
    cout << "Enter the number of inputs: ";
    cin >> input;

    // cout << endl;
    // cout << cin.good( ) << endl;        // good - input 'a' result 0
    //                                     // good - input 3 result 1

    while( input != 0 ) {
        do {
            cin.clear( );
            cin.ignore( 256, '\n' );
            cout << input << ": ";
            cin >> temp;

            if( !cin.good( ) ) {
                cout << "3 - This is not a valid number input" << endl;
            } else {
                sum += temp;
            }
        } while( !cin.good( ) );
        
        input--;
    }

    cout << "Sum of all inputs: " << sum << endl;
    cout << endl;
}