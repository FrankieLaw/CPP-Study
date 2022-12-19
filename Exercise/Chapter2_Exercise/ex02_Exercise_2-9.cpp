/*
    Question 2.9

    Write a single C++ statement or line that accomplishes each of the following:
    a) Print the message "Enter two numbers".
    b) Assign the product of variables b and c to variable a.
    c) State that a program performs a payroll calculation (i.e., use text that helps to document
    a program).
    d) Input three integer values from the keyboard into integer variables a, b and c.
*/

#include <iostream>
using namespace std;

int main( ) {
    // Performs a payroll calculation
    int a, b, c = 0;

    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    
    a = b * c;

    cout << "Answer is: " << a << endl;
}