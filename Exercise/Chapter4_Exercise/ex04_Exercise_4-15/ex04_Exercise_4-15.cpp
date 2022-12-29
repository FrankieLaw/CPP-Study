// ex04_Exercise_4-15.cpp
//
// (Sales Commission Calculator) A large company pays its salespeople on 
// a commission basis. The salespeople each receive $200 per week plus 9% 
// of their gross sales for that week. For example, a salesperson who 
// sells $5000 worth of chemicals in a week receives $200 plus 9% of 
// $5000, or a total of $650. Develop a C++ program that uses a while 
// statement to input each salesperson’s gross sales for last week and 
// calculates and displays that salesperson’s earnings. Process one 
// salesperson’s figures at a time.
#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int exitCode = -1;
    double sales = 0;
    double baseWage = 200.00;

    do {
        displayTestHeading( "Sales Commission Calculator" );
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;

        if( sales < 0 ) {
            cout << "cannot have negative sales" << endl;
            continue; 
        }

        if( sales != exitCode ) {
            cout << "Salary is: " << baseWage + sales * 0.09 << endl;
        }
    } while( sales != exitCode );
}