#include <iostream>
// casting.cpp
// Testing how casting affects the value 
// when switch from high bits to low bits

#include <iomanip>
#include <cfloat>
using namespace std;

int main( ) {
    int x = INT_MAX;        //32 bits
    float y = FLT_MAX;      //32 bits
    double d = DBL_MAX;     //64 bits

    cout << "Max Int: " << x << endl;     // 2,147,483,647
    cout << "Max Float: " << y << endl;   // 3.40282e+38
    cout << "Max Double: " << d << endl;  // 1.79769e+308

    x = static_cast<int>( d );
    //cout << "Cast float into x: " << x << endl;
    //cout << "Cast double into x: " << x << endl;
    //
    cin.get( );
}