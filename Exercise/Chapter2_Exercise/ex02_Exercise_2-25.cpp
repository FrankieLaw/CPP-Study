/*
    Question 2.25
    
    (Multiples) Write a program that reads in two integers and determines and prints if the first
    is a multiple of the second. [Hint: Use the modulus operator.]
*/

#include <iostream>
using namespace std;

int main( ) {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    if( ( a % b ) == 0 )
        cout << a << " is multiple of " << b << endl;

    if( ( a % b ) != 0 )
        cout << a << " is not multiple of " << b << endl;
}