// File: pointClass
// Created by Tyler Sandoval on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Point
{
private:
    float x;    // x-coordinate
    float y;    // y-coordinate
public:
    Point(): x(0.0), y(0.0) {}

    void showPoint()
    {
        cout << "X-coordinate is: " << x << endl;
        cout << "Y-coordinate is: " << y << endl;
        cout << endl;
    }
    void updatePoint(float a, float b)
    {
        // Update x and y
        x = a;
        y = b;
    }
};
// Prototypes

// Prototypes

// Main Program Program
int main(void)
{
    Point p1;
    p1.showPoint();             // Display values
    p1.updatePoint(2.5,3.9);    // Update values
    p1.showPoint();             // Display values post-update

    return 0;
}
// Function Definitions