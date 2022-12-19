// Fig. 2.5: fig02_05.cpp
// Addition program that displays the sum of two integers.

// PREPROCESSOR =================================
// Allows program to perform input and output
// ==============================================
#include <iostream>

// MAIN ==================================
// function main begins program execution
// =======================================
int main( ) {
    //variable declarations
    int number1;                // first integer to add
    int number2;                // second integer to add
    int sum;                    // sum of number1 and number2

    std::cout << "Enter first integer: ";       // prompt user for data
    std::cin >> number1;                        // read first integer from user into number1

    std::cout << "Enter second integer: ";      // prompt user for data
    std::cin >> number2;                        // read second integer from user into number2

    sum = number1 + number2;                    // add the numbers; store result in sum

    std::cout << "Sum is " << sum << std::endl; // display sum; end line
}
//End of program