/*
    Question 2.18
    
    (Comparing Integers) Write a program that asks the user to enter two integers, obtains the
    numbers from the user, then prints the larger number followed by the words "is larger." If the
    numbers are equal, print the message "These numbers are equal."
*/

#include <iostream>
using namespace std;

int main( ) {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    if( a > b )
        cout << a << " is greater than " << b << endl;

    if( b > a )
        cout << b << " is greater than " << a << endl;

    if( a == b ) {
        cout << "These numbers are equal" << endl;
    }
}