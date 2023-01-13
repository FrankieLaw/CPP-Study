// c05_Ex_5-16.cpp
// Compound interest calculations with for.
// Using only integer to represent double

#include <iostream>
#include <iomanip>
#include <cmath>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    int amount;                 // All currency are in pennies
    int principal = 100000;     // 100,000 pennies = 1,000 dollars
    double rate = 0.05;

    displayTestHeading( "Represent Double with Int" );
    cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;
    cout << fixed << setprecision( 2 );

    for( int year = 1; year <= 10; ++year ) {
        int whole = 0;
        int decimal = 0;

        amount = principal * pow ( 1.0 + rate, year );

        whole = amount / 100;
        decimal = amount % 100;

        cout << setw( 4 ) << year << setw( 18 ) << whole << ".";

        if( decimal == 0 ) {
            cout << "00" << endl;
        } else if( decimal >= 1 && decimal <= 9 ) {
            cout << "0" << decimal << endl;
        } else {
            cout << decimal << endl;
        }   
    }

    cout << endl;
}