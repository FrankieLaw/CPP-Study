// ex04_Exercise_4-17
//
// (Find the Largest) The process of finding the largest number (i.e., the maximum of a group
// of numbers) is used frequently in computer applications. For example, a program that determines
// the winner of a sales contest inputs the number of units sold by each salesperson. The salesperson
// who sells the most units wins the contest. Write a C++ program that uses a while statement to determine
// and print the largest number of 10 numbers input by the user. Your program should use
// three variables, as follows:
//
// counter: A counter to count to 10 (i.e., to keep track of how many numbers have
// been input and to determine when all 10 numbers have been processed).
// number: The current number input to the program.
// largest: The largest number found so far.
#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int count = 0;

    int largest = INT_MIN;
    int input = 0;

    displayTestHeading( "Finding Largest Number" );

    while( count < 10 ) {
        cout << "Enter a number: ";
        cin >> input;

        if( input > largest )
            largest = input;

        cout << "Current Input: " << input << endl;
        cout << "Largest Number so Far: " << largest << endl;
        cout << endl;

        count++;
    }

    cout << "The largest number is: " << largest << endl;
}