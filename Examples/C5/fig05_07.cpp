// Fig. 5.7: fig05_07.cpp
// do...while repetition statement.
#include <iostream>
using namespace std;

int main( ) {
    int counter = 1;

    do {
        cout << counter << " ";
        counter++;
    } while( counter <= 10 );

    cout << endl;
}