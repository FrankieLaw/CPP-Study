/*
    Question 2.23
    
    (Largest and Smallest Integers) Write a program that reads in five integers and determines
    and prints the largest and the smallest integers in the group. Use only the programming techniques
    you learned in this chapter.
*/

#include <iostream>
using namespace std;

int main( ) {
    int a, b, c, d, e = 0;
    int largest;
    int smallest;

    // Prompt Input
    cout << "Enter 5 integers: ";
    cin >> a >> b >> c >> d >> e;
    
    // find largest
    largest = a;
    if( b > largest )
        largest = b;
    if( c > largest )
        largest = c;
    if( d > largest )
        largest = d;
    if( e > largest )
        largest = e;

    cout << "The largest is: " << largest << endl;

    // find smallest
    smallest = a;
    if( b < smallest )
        smallest = b;
    if( c < smallest )
        smallest = c;
    if( d < smallest )
        smallest = d;
    if( e < smallest )
        smallest = e;

    cout << "The smallest is: " << smallest << endl;
}