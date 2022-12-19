/*
    Question 2.19
    
    (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard
    and prints the sum, average, product, smallest and largest of these numbers.
*/

#include <iostream>
using namespace std;

int main( ) {
    int a, b, c = 0;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "Sum is: " << ( a + b + c ) << endl;
    cout << "Average is: " << ( a + b + c )/3 << endl;
    cout << "Product is: " << ( a * b * c ) << endl;
    
    if( a < b )
        if( a < c )
            cout << "Smallest is " << a << endl;
    
    if( b < a )
        if( b < c )
            cout << "Smallest is " << b << endl;

    if( c < a )
        if( c < b )
            cout << "Smallest is " << c << endl;


    if( a > b )
        if( a > c )
            cout << "Largest is " << a << endl;
    
    if( b > a )
        if( b > c )
            cout << "Largest is " << b << endl;

    if( c > a )
        if( c > b )
            cout << "Largest is " << c << endl;
}