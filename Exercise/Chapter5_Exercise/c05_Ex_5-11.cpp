// c05_Ex_5-11.cpp
//
// (Compound Interest) Modify the compound interest program of Section 5.4 to repeat its steps
// for the interest rates 5%, 6%, 7%, 8%, 9% and 10%. Use a for statement to vary the interest rate.
#include <iostream>
#include <iomanip>
#include <cmath>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    double principal = 1000.0;

    displayTestHeading( "Interest Rate 5 - 10%" );
    cout << "Year" 
         << setw( 15 ) << "5% Interest"
         << setw( 15 ) << "6% Interest"
         << setw( 15 ) << "7% Interest"
         << setw( 15 ) << "8% Interest"
         << setw( 15 ) << "9% Interest"
         << setw( 15 ) << "10% Interest"
         << endl;

    cout << fixed << setprecision( 2 );

    for( int year = 1; year <= 10; ++year ) {

        cout << setw( 4 ) << year 
             << setw( 15 ) << principal * pow ( 1.0 + 0.05, year )
             << setw( 15 ) << principal * pow ( 1.0 + 0.06, year )
             << setw( 15 ) << principal * pow ( 1.0 + 0.07, year )
             << setw( 15 ) << principal * pow ( 1.0 + 0.08, year )
             << setw( 15 ) << principal * pow ( 1.0 + 0.09, year )
             << setw( 15 ) << principal * pow ( 1.0 + 0.10, year )
             << endl;
    }

    cout << endl;
}