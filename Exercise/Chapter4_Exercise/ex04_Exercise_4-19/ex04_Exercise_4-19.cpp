// ex04_Exercise_4-19
//
// (Find the Two Largest Numbers) Using an approach similar to that in Exercise 4.17, find
// the two largest values among the 10 numbers. [Note: You must input each number only once.]
//
#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    int count = 0;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int input = 0;

    displayTestHeading( "Finding 1st and 2nd Largest Number" );

    while( count < 10 ) {
        cout << "Enter a number: ";
        cin >> input;

        if( count == 1 ) {
            largest = input;
            secondLargest = input;
            
        } else {
            if( input > largest ) {
                largest = input;
            } else if( input > secondLargest ) {
                secondLargest = input;
            }
        }

        cout << "Current Input: " << input << endl;
        cout << "Largest Number: " << largest << endl;
        cout << "Second Largest Number: " << secondLargest << endl;
        cout << endl;

        count++;
    }
}