// Show the value of x after each of the following statements is performed:
// a) x = fabs( 7.5 )
// b) x = floor( 7.5 )
// c) x = fabs( 0.0 )
// d) x = ceil( 0.0 )
// e) x = fabs( -6.4 )
// f) x = ceil( -6.4 )
// g) x = ceil( -fabs( -8 + floor( -5.5 ) ) )

// Floor rounds the number to the lower end.
// This rule also applies to Ceil.
// 7.5 = 7.0        -7.5 = -8.0

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main( ) {
    double x;
    int formulaWidth = 40;

    cout << endl;

    x = fabs( 7.5 );
    cout << setw( formulaWidth ) << "fabs( 7.5 ) = " << x << endl;

    x = floor( 7.5 );
    cout << setw( formulaWidth ) << "floor( 7.5 ) = " << x << endl;

    x = floor( -7.5 );
    cout << setw( formulaWidth ) << "floor( -7.5 ) = " << x << endl;

    x = fabs( 0.0 );
    cout << setw( formulaWidth ) << "fabs( 0.0 ) = " << x << endl;

    x = ceil( 0.0 );
    cout << setw( formulaWidth ) << "ceil( 0.0 ) = " << x << endl;

    x = fabs( -6.4 );
    cout << setw( formulaWidth ) << "fabs( -6.4 ) = " << x << endl;

    x = ceil( -6.4 );
    cout << setw( formulaWidth ) << "ceil( -6.4 ) = " << x << endl;

    x = ceil( -fabs( -8 + floor( -5.5 ) ) );
    cout << setw( formulaWidth ) << "ceil( -fabs( -8 + floor( -5.5 ) ) ) = " << x << endl;

    cout << endl;
}