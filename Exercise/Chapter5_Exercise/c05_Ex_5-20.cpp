// c05_Ex_5-20.cpp
//
// (Pythagorean Triples) A right triangle can have sides that are all integers. A set of three 
// integer values for the sides of a right triangle is called a Pythagorean triple. These three 
// sides must satisfy the relationship that the sum of the squares of two of the sides is equal 
// to the square of the hypotenuse. 
//
//      a2 + b2 = c2
//
// Find all Pythagorean triples for side1, side2 and hypotenuse 
// all no larger than 500. Use a triple-nested for loop that tries all possibilities. 
//
// This is an example of brute force computing. You’ll learn in more advanced computer science 
// courses that there are many interesting problems for which there’s no known algorithmic 
// approach other than sheer brute force
#include <iostream>
#include <cmath>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    int side1 = 1;
    int side2 = 1;
    int hyp = 1;

    int sampleSides = 50;

    displayTestHeading( "Pythegorean Triples" );
    
    for( side1 = 1; side1 <= sampleSides; side1++ ) {
        for( side2 = 1; side2 <= sampleSides; side2++ ) {
            for( hyp = 1; hyp <= sampleSides; hyp++ ) {
                if( ( pow( side1, 2 ) + pow( side2, 2 ) ) == pow( hyp, 2 ) ) {
                    cout << " > " << side1 * side1 << " + " << side2 *side2 << " = " << hyp * hyp << endl;
                }
            }
        }
    }
    
    cout << endl;
}