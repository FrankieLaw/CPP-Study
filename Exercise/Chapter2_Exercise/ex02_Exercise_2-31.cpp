/*
    Question 2.31

    (Car-Pool Savings Calculator) Research several car-pooling websites. Create an application
    that calculates your daily driving cost, so that you can estimate how much money could be saved by
    car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
    congestion. The application should input the following information and display the user’s cost per
    day of driving to work:

        a) Total miles driven per day.
        b) Cost per gallon of gasoline.
        c) Average miles per gallon.
        d) Parking fees per day.
        e) Tolls per day.
*/
#include <iostream>
using namespace std;

int main( ) {
    int milesPerDay;
    int gasCostPerGallon;
    int averageMPG;
    int parkingFee;
    int tolls;

    cout << "Enter miles drive per day: ";
    cin >> milesPerDay;

    cout << "Enter Cost Per Gallon: ";
    cin >> gasCostPerGallon;

    averageMPG = gasCostPerGallon / milesPerDay;

    cout << "Parking Fees?: ";
    cin >> parkingFee;

    cout << "Tolls Paid: ";
    cin >> tolls;

    cout << "Your Total Saving if you were to car pool:\n"
         << "$" << averageMPG + parkingFee + tolls 
         << endl;
}