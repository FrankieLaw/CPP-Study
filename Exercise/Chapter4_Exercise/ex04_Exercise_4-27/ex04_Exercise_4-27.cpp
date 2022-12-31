// ex04_Exercise_4-27.cpp
//
// (Printing the Decimal Equivalent of a Binary Number) Input an integer containing only 
// 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. Use the modulus 
// and division operators to pick off the “binary” number’s digits one at a time from right 
// to left. Much as in the decimal number system, where the rightmost digit has a positional 
// value of 1, the next digit left has a positional value of 10, then 100, then 1000, and so 
// on, in the binary number system the rightmost digit has a positional value of 1, the next 
// digit left has a positional value of 2, then 4, then 8, and so on. Thus the decimal number 
// 234 can be interpreted as 2 * 100 + 3 * 10 + 4 * 1. The decimal equivalent of binary 1101 
// is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8, or 13. [Note: To learn more about binary 
// numbers, refer to Appendix D.]

#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    const int div = 10;

    int binaryInput = 0;    // Binary Input
    int bCopy = 0;
    int decimal = 0;        // Decimal Output
    int base2Unit = 1;      // Binary Unit Counter
    int digit = 0;          // Temporary Place holder for checking a single unit
    bool flag = false;      // Fail Check flag (true means not binary)

    displayTestHeading( "Testing Palindromes" );
    cout << "Enter a Binary Digit (ex. 11111010): ";
    cin >> binaryInput;
    bCopy = binaryInput;

    if( binaryInput == INT_MAX ) {
        cout << "Your binary number is too big for type Int" << endl;
    } else {
        while( bCopy != 0 ) {
            digit = bCopy % 10;

            if( digit != 1 && digit != 0 ) {
                cout << "This is not a binary digit" << endl;
                flag = true;
                break;

            } else {
                decimal += digit * base2Unit;
                bCopy /= 10;
                base2Unit *= 2;
            }
        }

        if( !flag ) {
            cout << "Binary " << binaryInput << " is: " << decimal << endl;
        }
    }


    cout << endl;
}