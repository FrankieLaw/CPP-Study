/*
    Question 2.20
    
    (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of
    a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value
    3.14159 for π. Do all calculations in output statements.
*/

#include <iostream>
using namespace std;

int main( ) {
    // Input Radius
    int radius = 0;
    
    cout << "Enter a radius: ";
    cin >> radius;

    // Diameter (2r) Calculation
    cout << "Diameter: " << (2 * radius) << endl;

    // Circumference (2πr) Calculation
    cout << "Circumference: " << (2 * 3.14159 * radius) << endl;

    // Area (πr2) Calculation
    cout << "Area: " << (3.14159 * (radius * radius) ) << endl;
}