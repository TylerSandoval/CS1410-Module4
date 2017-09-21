// File: counter
// Created by Tyler Sandoval on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Counter
{
private:
    unsigned int count;

public:
    // Constructor: sets default value for class
    Counter(): count(100)  // default value for class set as 100
    {/*empty body*/}

    void incCount()   // Increment Count
    {
        count++;
    }
    int getCount()
    {
        return count;
    }
};
// Prototypes

// Main Program Program
int main(void)
{
    Counter c1,c2;

    cout << "\nc1 = " << c1.getCount(); // display value of c1
    c1.incCount();                      // increment c1
    cout << "\nc1 = " << c1.getCount(); // display c1 after increment

    cout << "\nc2 = " << c2.getCount(); // display c2
    c2.incCount();                      // increment c2
    cout << "\nc2 = " << c2.getCount(); // display c2 after increment

    return 0;
}
// Function Definitions