// c05_Ex_5-14.cpp
//
// (Calculating Total Sales) A mail order house sells five different products whose retail prices
// are: product 1 — $2.98, product 2—$4.50, product 3—$9.98, product 4—$4.49 and product 5—
// $6.87. Write a program that reads a series of pairs of numbers as follows:
// a) product number
// b) quantity sold
// Your program should use a switch statement to determine the retail price for each product. Your
// program should calculate and display the total retail value of all products sold. Use a sentinel-controlled
// loop to determine when the program should stop looping and display the final results.
#include <iostream>
#include "../../src/tempCode.h"
using namespace std;

int main( ) {
    bool catelogPass = false;
    bool quantityPass = false;

    int quantity = 0;
    int catelog = 0;

    int p1Quantity = 0;
    int p2Quantity = 0;
    int p3Quantity = 0;
    int p4Quantity = 0;

    // ========================
    //  Sential Do While Loop
    // ========================
    do {

        // =============================
        //  Catelog Choice Loop
        //  -> Enforce correct input
        //  -> [1-4] || [-1]
        // =============================
        do {
            catelogPass = false;

            displayTestHeading( "Product Tracker" );
            cout << "Product 1 - $2.98\n"
                 << "Product 2 - $4.50\n"
                 << "Product 3 - $9.98\n"
                 << "Product 4 - $6.87\n"
                 << endl;

            cout << "Enter a catelog number (-1 to exit)" << endl;
            printf( "  Catelog # > " );
            cin >> catelog;

            if( !cin.good( ) ) {
                cin.clear( );
                cin.ignore( 256, '\n' );
                cout << "  > Not a valid value\n" << endl;
                
            } else {
                if( ( catelog >= 1 && catelog <= 4 ) || catelog == -1 ) {
                    catelogPass = true;
                }

                if( catelog > 4 || catelog < -1 ) {
                    cout << "  > Not on catelog\n" << endl;
                }
            } 
        } while( !catelogPass );    // END CATELOG CHOICE INPUT


        // =============================
        //  Early Exit Check
        // =============================
        if( catelog != -1 ) {

            // =============================
            //  Quantity Sold Input
            //  -> Enforce correct input
            //  -> [0-9]
            // =============================
            do {
                quantityPass = false;

                printf( "  Sold Amt > " );
                cin >> quantity;
                
                if( !cin.good( ) || quantity < 1 ) {
                    quantityPass = false;
                    cout << "  > A positive number only...\n" << endl;

                    cin.clear( );
                    cin.ignore( 256, '\n' );

                } else {
                    switch( catelog ) {
                        case 1:
                            p1Quantity += quantity;
                        break;

                        case 2:
                            p2Quantity += quantity;
                        break;

                        case 3:
                            p3Quantity += quantity;
                        break;

                        case 4:
                            p4Quantity += quantity;
                        break;                        
                    }

                    quantityPass = true;
                    cout << "  > Record Logged\n" << endl;
                }
            } while( !quantityPass );   // END QUANTITY INPUT
        }
    } while( catelog != -1 );   // END ALL INPUT


    displayTestHeading( "Product Report" );

    printf( "Product %d sold $%.2f\n", 1, p1Quantity * 2.98 );
    printf( "Product %d sold $%.2f\n", 2, p2Quantity * 4.50 );
    printf( "Product %d sold $%.2f\n", 3, p3Quantity * 9.98 );
    printf( "Product %d sold $%.2f\n", 4, p4Quantity * 6.87 );

    cout << endl;
}