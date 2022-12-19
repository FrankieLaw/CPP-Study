// Fig. 2.13: fig02_13.cpp
// Comparing integers using if statements, relational operators
// and equality operators.
#include <iostream>

// =================================================================
//  The namespace std is defined in <iostream> header file.
//  The namespace is then get expanded inside of <yvals_core.h>
//  Another words, std is tied to a class scopy inside <iostream>
// =================================================================
using std::cout;    // program uses cout
using std::cin;     // program uses cin
using std::endl;    // program uses endl

// function main begins program execution
int main( ) {
    int number1;    // first integer to compare
    int number2;    // second intger to compare

    cout << "Enter two integers to compare: ";  // prompt user for data
    cin >> number1 >> number2;                  // Read two integers from user

    if( number1 == number2 )
        cout << number1 << " == " << number2 << endl;

    if( number1 != number2 )
        cout << number1 << " != " << number2 << endl;

    if( number1 < number2 )
        cout << number1 << " < " << number2 << endl;

    if( number1 > number2 )
        cout << number1 << " > " << number2 << endl;

    if( number1 <= number2 )
        cout << number1 << " <= " << number2 << endl;

    if( number1 >= number2 )
        cout << number1 << " >= " << number2 << endl;
}
// End of Main