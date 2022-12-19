// ex02_Review.cpp
// Chapter 2 review coding questions
// Assuming that 'using namespace std' has not been used.

#include <iostream>

int main( ) {
    // Question 2.3-a
    // Declare the variable c, thisIsAVariable, q76354 and number to be of type int.
    int c;
    int thisIsAVariable;
    int q76354;
    int number;

    // Question 2.3-b
    // Prompt the user to enter an integer. End your prompting message with a colon(:)
    // followed by a space and leave the cursor positioned after the space.
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Question 2.3-c
    // Read an integer from the user at the keyboard and store it in integer variable age.
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Question 2.3-d
    // If the variable number is not equal to 7, print "The variable number is not equal to 7"
    if( number != 7 )
        std::cout << "The variable number is not equal to 7" << std::endl;

    // Question 2.3-e
    // Print the message "This is a C++ program" on one line.
    std::cout << "This is a C++ program" << std::endl;

    // Question 2.3-f
    // Print the message "This is a C++ program" on two lines. End the first line with C++.
    std::cout << "This is a C++\nprogram" << std::endl;

    // Question 2.3-g
    // Print the message "This is a C++ program" with each word on a separate line.
    std::cout << "This\nis\na\nC++\nprogram" << std::endl;

    // Question 2.3-h
    // Print the message "This is a C++ program". Separate each word from the next by a tab.
    std::cout << "This\tis\ta\tC++\tprogram" << std::endl;
}


