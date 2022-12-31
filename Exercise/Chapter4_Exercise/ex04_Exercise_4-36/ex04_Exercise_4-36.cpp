// ex04_Exercise_4-36.cpp
//
// (World Population Growth) World population has grown considerably over the centuries.
// Continued growth could eventually challenge the limits of breathable air, drinkable water, 
// arable cropland and other limited resources. There is evidence that growth has been slowing 
// in recent years and that world population could peak some time this century, then start 
// to decline. 
// 
// For this exercise, research world population growth issues online. Be sure to investigate 
// various viewpoints. Get estimates for the current world population and its growth rate 
// (the percentage by which it is likely to increase this year). Write a program that calculates 
// world population growth each year for the next 75 years, using the simplifying assumption 
// that the current growth rate will stay constant. Print the results in a table. The first 
// column should display the year from year 1 to year 75. The second column should display 
// the anticipated world population at the end of that year. The third column should display 
// the numerical increase in the world population that would occur that year. Using your results, 
// determine the year in which the population would be double what it is today, if this year’s 
// growth rate were to persist.
//
// The measurement of growth is measure by a steady rate each year up to 50 years.
// For example 2% per year will be 2% up to 50 years.  And then the percentage
// will be evaluated again.

#include <iostream>
#include <math.h>
#include <iomanip>
#include "../../../src/tempCode.h"
using namespace std;

int main( ) {
    // Statistical Parameters
    double rateOfGrowth = 0.01;         // Represented as percentage. 0.01 = 1% / year
    double curPopulation = 7922312800;  // Current world's population.
    int curYear = 2022;                 // Assuming stead rate of 1% for the next 50 years.
    int maxYear = 75;

    // Projection Parameters
    double expectedPopulation = 0;      // set to initial popluation
    double futureChange = 0;

    // Loop Parameters
    int count = 0;

    // Main Event
    displayTestHeading( "Popluation Projection in 75 Years" );
    printf( "Year\tPopulation\tChange\n" );

    while( count < maxYear ) {
        futureChange = curPopulation * ( pow( 1 + rateOfGrowth, count + 1 ) - 1 );
        expectedPopulation = curPopulation + futureChange;
        
        printf( "%d\t%.f\t+%.f\n", ( curYear + count + 1 ), expectedPopulation, futureChange );
        count++;
    }
    
    cout << endl;
}