/*
    Question 2.16
    
    (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
    numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
*/

#include <iostream>
using namespace std;

int main( ) {
    int a, b = 0;

    cout << "Enter two integers: ";
    cin >> a >> b;

    //Addition
    cout << "Addition result: " << a + b << endl;

    //Subtraction
    cout << "Subtraction result: " << a - b << endl;

    // Multiplcation
    cout << "Multiplication result: " << a * b << endl;

    //Division
    if( b != 0 )
        cout << "Division result: " << a / b << endl;
    else
        cout << "Cannot Divide by Zero";
}