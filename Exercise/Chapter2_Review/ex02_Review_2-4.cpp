/* ====================================================================
    Question 2.4
    
    Write a statement (or comment) to accomplish each of the following (assume that using
    directives have been used for cin, cout and endl):
    
    a) State that a program calculates the product of three integers.
    b) Declare the variables x, y, z and result to be of type int (in separate statements).
    c) Prompt the user to enter three integers.
    d) Read three integers from the keyboard and store them in the variables x, y and z.
    e) Compute the product of the three integers contained in variables x, y and z, and assign
    the result to the variable result.
    f) Print "The product is " followed by the value of the variable result.
    g) Return a value from main indicating that the program terminated successfully.
==================================================================== */

// This program calculates the product of three integers.
#include <iostream>
using namespace std;

int main( ) {
    int x;      // Variable use for product
    int y;      // Variable use for product
    int z;      // Variable use for product
    int result; // Result of the products

    //Prompt for 3 input from user
    cout << "Enter 3 integers for calculation: ";
    cin >> x >> y >> z;

    //Calculate the product
    result = x * y * z;

    cout << "The product is " << result << endl;

    return 0;
}
