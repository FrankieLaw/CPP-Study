// ex04_Exercise_4-16
//
// (Salary Calculator) Develop a C++ program that uses a while statement to determine the
// gross pay for each of several employees. The company pays “straight time” for the first 40 hours
// worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours.
// You are given a list of the employees of the company, the number of hours each employee worked
// last week and the hourly rate of each employee. Your program should input this information for
// each employee and should determine and display the employee’s gross pay.
#include <iostream>
#include <iomanip>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int exitCode = -1;

    int totalHours = 0;
    float rate = 0;
    float totalWage = 0;

    do {
        displayTestHeading( "Hourly Wage Calculator" );
        cout << "Enter hours worked (-1 to end): ";
        cin >> totalHours;

        if( totalHours != exitCode ) {
            cout << "Enter hourly rate of the employee ($00.00): ";
            cin >> rate;

            if( totalHours > 40 ) {
                totalWage = ( 40 * rate ) + ( ( totalHours - 40 ) * rate * 1.50 );
            } else {
                totalWage = totalHours * rate;
            }

            cout << "Salary is " << "$" << setprecision(2) << fixed << totalWage << endl;
        }
    } while( totalHours != exitCode );
}