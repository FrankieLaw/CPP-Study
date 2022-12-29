// ex04_Exercise_4-14.cpp
//
// (Credit Limits) Develop a C++ program that will determine whether a 
// department-store customer has exceeded the credit limit on a charge 
// account. For each customer, the following facts are available:
// a) Account number (an integer)
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit
//
// The program should use a while statement to input each of these facts, 
// calculate the new balance (= beginning balance + charges – credits) 
// and determine whether the new balance exceeds the customer’s credit 
// limit. For those customers whose credit limit is exceeded, the program 
// should display the customer’s account number, credit limit, new 
// balance and the message “Credit Limit Exceeded.”
#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int exitCode = -1;      // sentinal flag

    int account = 0;        // account number
    double balance = 0;     // account balance
    double charges = 0;
    double credits = 0;
    double limits = 0;

    do {
        displayTestHeading( "Bank Account Entry" );
        cout << "Enter account number (or -1 to quit): ";
        cin >> account;

        if( account != exitCode ) {
            cout << "Enter beginning balance: ";
            cin >> balance;

            cout << "Enter total charges: ";
            cin >> charges;

            cout << "Enter total credits: ";
            cin >> credits;

            cout << "Enter credit limit: ";
            cin >> limits;

            balance = balance + charges - credits;
            cout << endl;

            cout << "New balance is: " << balance << endl;
            cout << "Account: " << account << endl;
            cout << "Credit limit: " << limits << endl;
            cout << "Balance: " << balance << endl;

            if( balance > limits ) {
                cout << "Credit Limit Exceeded" << endl;
            }
        }
    } while( account != exitCode );
}


