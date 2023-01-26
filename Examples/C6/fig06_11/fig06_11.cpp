// Fig. 6.11: fig06_11.cpp
// Craps simulation.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../../../src/tempCode.h"
using namespace std;

int rollDice( );

int main( ) {
    enum Status { CONTINUE, WON, LOST };

    int myPoint;
    Status gameStatus;

    displayTestHeading( "Crap Simulator" );

    srand( time( 0 ) );
    int sumOfDice = rollDice( );

    switch( sumOfDice ) {
        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sumOfDice;
            cout << "Point is " << myPoint << endl;
            break;
    }

    while( gameStatus == CONTINUE ) {
        sumOfDice = rollDice( );

        if( sumOfDice == myPoint ) {
            gameStatus = WON;
        } else {
            if( sumOfDice == 7 ) {
                gameStatus = LOST;
            }
        }

    }

    if( gameStatus == WON ) {
        cout << "Player Wins " << endl;
    } else {
        cout << "Player Loses" << endl;
    }

    cout << endl;
}

int rollDice( ) {
    int die1 = 1 + rand( ) % 6;
    int die2 = 1 + rand( ) % 6;

    int sum = die1 + die2;

    cout << "Player rolled " 
         << die1 << " + " << die2 
         << " = " << sum << endl;

    return sum;
}