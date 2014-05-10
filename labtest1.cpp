/**************************************************
/Program: triptonewyork.cpp
/Author: Robert Payne
/Date: 02/09/2012
/Purpose: This program asks the user to input
/   the MPG of their car and then calculates
/   the amount of time it will take to drive
/   there and the number of gallons of gas it will
/   take. The program then outputs the car's
/   MPG, the time it will take to drive to
/   New York, andn the number of gallons of
/   gas required for the trip.
/*************************************************/

#include <iostream>

using namespace std;

int main()
{
    float const distance = 541;    //Distance from Charlotte to New York in miles
    float const averageSpeed = 55; //Average speed driving 55 MPH
    float milesPerGallon;          //User input of MPG for car
    float travelTime;              //Total time required to travel
    float totalGallonsGas;         //Total amount of gas needed for the drive

    //Prompt for user input of miles per gallon
    cout << "Enter the number of miles per gallon for your car: ";
    cin >> milesPerGallon;

    totalGallonsGas = distance / milesPerGallon;    //Calculation for amount of gas needed
    travelTime = distance / averageSpeed;           //Calculation for total time needed for travel

    //Output: MPG, travel time, and total gas needed
    cout << "Trip to New York\n";
    cout << "Car mileage for 1 gallon of gas: " << milesPerGallon << " gallons.\n";
    cout << "Time required to reach New York City: " << travelTime << " hours.\n";
    cout << "Total gas required for the trip: " << totalGallonsGas << " gallons.\n";

    return 0;
}
