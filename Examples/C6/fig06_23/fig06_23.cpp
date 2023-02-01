// Fig. 6.23: fig06_23.cpp
// Using the unary scope resolution operator.
#include <iostream>
using namespace std;

int number = 7;

int main( ) {
    int number = 10;

    cout << endl;

    cout << "Local int value of number = " << number
         << "\nGlobal int value of n umber = " << ::number << endl;

    cout << endl;
}