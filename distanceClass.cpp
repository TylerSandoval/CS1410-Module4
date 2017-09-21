// File: distanceClass
// Created by Tyler Sandoval on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
/* Task: Define a class called Distance
 * that stores int feet and float inches
 * Two methods: setDist -> Capture input from user
 *              getDist -> Set the information with customer input
 *              showDist -> Display value
 */

// Constants, Structs, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
    int cm;        // public data from the class
    void setDist(int a, float b)
    {
        feet = a;
        inches = b;
    }
    void getDist()  // Gets user input
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showDist()
    {
        cout << "\nHeight: " << feet << "'-" << inches << "\"" << endl;
    }
};
// Prototypes

// Main Program Program
int main(void)
{
    // Create an instance "instantiate" the class
    Distance d1, d2;
    // Use the setDist method to set/access data
    d1.setDist(6,6.5);
    cout << "\nDistance 1: ";
    d1.showDist();
    // Use the getDist method to allow the user to set/access data
    d2.getDist();
    cout << "\nDistance 2: ";
    d2.showDist();

    // Access a public data member
    d2.cm = 8.2;
    cout << "cm: " << d2.cm << endl;

    return 0;
}
// Function Definitions