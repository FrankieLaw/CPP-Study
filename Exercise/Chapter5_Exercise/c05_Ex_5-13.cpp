// c05_Ex_5-13.cpp
//
// (Bar Chart) One interesting application of computers is drawing graphs and bar charts.
// Write a program that reads five numbers (each between 1 and 30). Assume that the user enters only
// valid values. For each number that is read, your program should print a line containing that number
// of adjacent asterisks. For example, if your program reads the number 7, it should print *******.
#include <iostream>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    int input = 0;

    displayTestHeading( "Bar Chart" );
    cout << "Enter a number (-1 to quit)" << endl;

    do {
        cout << " > ";
        cin >> input;

        if( cin.good( ) ) {
            cout << " > ";

            for( int i = 0; i < input; i++ ) {
                cout << "*";
            }

            cout << "\n\n";

        } else {
            cout << " > Wrong input!!\n" << endl;

            cin.clear( );
            cin.ignore( 256, '\n' );
        }

    } while( cin.good( ) && input != -1 );
    
    cout << " > Good Bye!!\n" << endl;
}