// ex04_Exercise_4-28.cpp
//
// (Checkerboard Pattern of Asterisks) Write a program that displays the following checkerboard
// pattern. Your program must use only three output statements, one of each of the following
// forms:
//      cout << "* ";
//      cout << ' ';
//      cout << endl;

#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    const int maxCol = 8;
    const int maxRow = 8;

    int curCol = 0;
    int curRow = 0;
    bool colFlag = false;       // start at 0

    displayTestHeading( "Checkerboard Print Out" );
    while( curRow < maxRow ) {
        curCol = 0;

        if( curRow % 2 == 1 ) {
            cout << " ";
        }

        while( curCol < maxCol ) {
            cout << "* ";
            curCol++;
        }

        cout << "\n";
        curRow++;
    }
    cout << endl;
}