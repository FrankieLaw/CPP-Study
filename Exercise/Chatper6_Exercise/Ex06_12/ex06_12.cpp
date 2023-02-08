// (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three
// hours. The garage charges an additional $0.50 per hour for each hour or part thereof in excess of three
// hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for
// longer than 24 hours at a time.
//
// Write a program that calculates and prints the parking charges for each
// of three customers who parked their cars in this garage yesterday. You should enter the hours parked
// for each customer. Your program should print the results in a neat tabular format and should calculate
// and print the total of yesterday’s receipts. The program should use the function calculateCharges to
// determine the charge for each customer. Your outputs should appear in the following format:

// Car   Hours   Charge
// 1     1.5     2.00
// 2     4.0     2.50
// 3     24.0    10.00
// TOTAL 29.5    14.50

#include <iostream>
#include <iomanip>
#include "../../../src/tempCode.h"
using namespace std;

double calculateCharges( double );

int main( ) {
    double hour1, hour2, hour3;
    int column1 = 6;
    int column2 = 9;
    int column3 = 7;
    
    displayTestHeading( "Hourly Parked for 3 Cars" );

    cout << "Enter number of hours parked for 3 cars: ";
    cin >> hour1 >> hour2 >> hour3;

    displayTestHeading( "Hourly Park Rates" );
    cout << fixed << setprecision( 2 );

    cout << left << setw( column1 ) << "Car" 
         << left << setw( column2 ) << "Hours" 
         << left << setw( column3 ) << "Charge" << endl;

    cout << left << setw( column1 ) << "1"
         << left << setw( column2 ) << hour1
         << left << setw( column3 ) << calculateCharges( hour1 ) << endl;

    cout << left << setw( column1 ) << "2"
         << left << setw( column2 ) << hour2
         << left << setw( column3 ) << calculateCharges( hour2 ) << endl;

    cout << left << setw( column1 ) << "3"
         << left << setw( column2 ) << hour3
         << left << setw( column3 ) << calculateCharges( hour3 ) << endl;

    cout << endl;
}

double calculateCharges( double hour ) {
    const double minimumHour = 3.0;
    double base = 2.00;

    double retValue = 0;

    if( hour <= minimumHour ) {
        retValue = base;

    } else {
        double excessTime = hour - 3;
        
        if( excessTime > 24 ) {
            retValue = 10.00;

        } else {
            retValue = base + ( excessTime * 0.50 );
        }
    }

    return retValue;
}
