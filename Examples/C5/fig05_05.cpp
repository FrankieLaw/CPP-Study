// Fig. 5.5: fig05_05.cpp
// Summing integers with the for statement.
#include <iostream>
using namespace std;

int main( ) {
    int total = 0;

    for( int number = 2; number <= 20; number += 2 ) {
        total += number;
    }

    cout << "Sum is " << total << endl;
}