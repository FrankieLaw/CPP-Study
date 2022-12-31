// ex04_Exercise_4-26.cpp
//
// (Palindromes) A palindrome is a number or a text phrase that reads the same backward 
// as forward. For example, each of the following five-digit integers is a palindrome: 
// 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit integer and 
// determines whether it’s a palindrome. [Hint: Use the division and modulus operators to 
// separate the number into its individual digits.]
#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int number = 0;
    int div = 10;

    int p1 = 0;             // 1st position of the number (1 # # # #)
    int p2 = 0;             // 2nd position of the number (# 2 # # #)
    int p3 = 0;             // 3rd position of the number (# # 3 # #)
    int p4 = 0;             // 4th position of the number (# # # 4 #)
    int p5 = 0;             // 5th position of the number (# # # # 5)
    
    
    displayTestHeading( "Testing Palindromes" );
    cout << "Enter a 5 digit Palindromes (ex. 12321): ";
    cin >> number;
    cout << endl;

    p5 = number % div;
    number /= div;

    p4 = number % div;
    number /= div;

    p3 = number % div;
    number /= div;

    p2 = number % div;
    number /= div;

    p1 = number;

    if( p1 == p5 && p2 == p4 )
        cout << "This is a Palindrome" << endl;
    else
        cout << "This is not a Palindrome" << endl;

    cout << endl;
}