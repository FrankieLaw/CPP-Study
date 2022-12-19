/*
    Question 2.28
    
    (Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
    into its digits and prints them separated by three spaces each. [Hint: Use the integer division and
    modulus operators.] For example, if the user types in 42339, the program should print: 4 2 3 3 9
*/

#include <iostream>
using namespace std;

int main( ) {
    int digits;
    int a, b, c, d, e;  // Temporary Digit holder

    cout << "Enter a 5 digit number: ";
    cin >> digits;

    // 5th Digit
    e = digits % 10;

    // 4th Digit
    digits = digits / 10;
    d = digits % 10;

    // 3rd Digit 
    digits = digits / 10;
    c = digits % 10;

    // 2nd Digit
    digits = digits / 10;
    b = digits % 10;

    // 1st Digit
    digits = digits / 10;
    a = digits;

    cout << a << "   " << b << "   " << c << "   " << d << "   " << e << endl;
}