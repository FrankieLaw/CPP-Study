// ex03_Review_3-12.cpp
// Create an Account class that a bank might use to represent customers’
// bank accounts.
//
// - Include a data member of type int to represent the account balance.
//
// - Provide a constructor that receives an initial balance and uses it
// to initialize the data member.
//
// - The constructor should validate the initial balance to ensure that
// it’s greater than or equal to 0. If not, set the balance to 0 and
// display an error message indicating that the initial balance was
// invalid.
//
// Provide three member functions.
// - Member function "credit" should add an amount to the current balance.
//
// - Member function "debit" should withdraw money from the Account and
// ensure that the debit amount does not exceed the Account’s balance.
// If it does, the balance should be left unchanged and the function
// should print a message indicating "Debit amount exceeded account
// balance."
//
// - Member function "getBalance" should return the current balance. Create
// a program that creates two Account objects and tests the member functions
// of class Account.

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    // CONSTRUCTOR
    Account(int startingBalance)
    {
        if (startingBalance >= 0)
        {
            balance = startingBalance;
        }
        else
        {
            balance = 0;
            cout << "Error: Balance cannot be less than 0" << endl;
        }

        displayBalanceMessage();
    }

    // Credit Member Function
    void credit(int amount)
    {
        balance += amount;
        displayBalanceMessage();
    }

    // Debit Member Function
    void debit(int withdraw)
    {
        if (withdraw > balance)
        {
            cout << "Withdraw amount exceed balance: " << getBalance() << endl;
        }

        else if (withdraw <= balance)
        {
            balance -= withdraw;
            cout << "Withdraw: " << withdraw << endl;
            displayBalanceMessage();
        }
    }

    // Retrieve Balance
    int getBalance()
    {
        return balance;
    }

    // Display Balance Message
    void displayBalanceMessage()
    {
        cout << "Your current balance is: " << getBalance() << endl;
    }

private:
    int balance;
};

void displayTestHeading(string text)
{
    cout << "\n";
    cout << "*******************************" << endl;
    cout << text << endl;
    cout << "*******************************" << endl;
}

int main()
{
    displayTestHeading("Instantiating Accounts");
    Account davidAccount(500);
    Account steveAccount(12500);

    displayTestHeading("Testing David's Account Balance");
    davidAccount.credit(1000);
    davidAccount.debit(100);
    davidAccount.debit(4000);
    davidAccount.debit(1400);

    displayTestHeading("Testing Steve's Account Balance");
    steveAccount.credit(10000);
    steveAccount.debit(1000000);
    steveAccount.debit(4000);

    return 0;
}