// ex04_Exercise_4-18.cpp
//
// (Tabular Output) Write a C++ program that uses a while statement and the tab escape sequence
// \t to print the following table of values:
//
// N    10*N    100*N   1000*N
// 1    10      100     1000
// 2    20      200     2000
// 3    30      300     3000
// 4    40      400     4000
// 5    50      500     5000
//
#include <iostream>
using namespace std;

int main( ) {
    int c = 1;

    cout << endl;
    printf( "%s\t%s\t%s\t%s\n", "N", "10*N", "100*N", "1000*N" );

    while( c <= 10 ) {
        printf( "%d\t%d\t%d\t%d\n", c * 1, c*10, c*100, c*1000 );
        c++;
    }

    cout << endl;
}