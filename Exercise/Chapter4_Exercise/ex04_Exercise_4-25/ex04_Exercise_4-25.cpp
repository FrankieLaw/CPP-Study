// ex04_Exercise_4-25.cpp
//
// (Square of Asterisks) Write a program that reads in the size of the side of a 
// square then prints a hollow square of that size out of asterisks and blanks. 
// Your program should work for squares of all side sizes between 1 and 20. For 
// example, if your program reads a size of 5, it should print
#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    bool failFlag = false;
    int size = 0;
    int curRow = 0;
    int curCol = 0;

    displayTestHeading( "Make a square" );

    do {
        cout << "Enter the size of a square (1-20): ";
        cin >> size;

        if( size <= 0 || size > 20 ) {
            cout << "Wrong size, try again" << endl << endl;
            failFlag = true;
        } else {
            failFlag = false;
        }
    } while( failFlag );

    cout << endl;

    while( curRow < size ) {
        curCol = 0;

        while( curCol < size ) {
            if( curRow == 0 || curRow == ( size - 1 ) ) {
                cout << "* ";
            } else {
                if( curCol == 0 || curCol == size - 1 ) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            curCol++;
        }

        cout << endl;
        curRow++;
    }

    cout << endl;
}