// fig06_20-AssignReferenceToVariable.cpp
// Demonstrating that you can assign an alias (reference variable)
// to a normal automatic variable.
#include <iostream>
using namespace std;

int main( ) {
    int  x = 10;
    int& y = x;
    int  z = y;

    cout << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl << endl;

    y = 20;
    cout << "assign the number 20 to the reference y" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl << endl;


    z = 50;
    cout << "assign the number 50 to z" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    cout << endl;

}