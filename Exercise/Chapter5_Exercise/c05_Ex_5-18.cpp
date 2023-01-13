// c05_Ex_5-18.cpp
//
// (Number Systems Table) Write a program that prints a table of the binary, octal and
// hexadecimal equivalents of the decimal numbers in the range 1–256.
#include <iostream>
#include <iomanip>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    displayTestHeading( "Decimal, Oct, Hex Representation");

    cout << setw( 8 ) << "Decimal" << "\t" 
         << setw( 8 ) << "Octal" << "\t" 
         << setw( 14 ) << "Hexadecimal" << endl;


    for( int i = 1; i <= 256; i++ ) {
        cout << setw( 8 ) << dec << i << "\t" 
             << setw( 8 ) << oct << i << "\t"
             << setw( 14 ) << hex << i << endl;
    }
}