/*
Program: Area of Triangle
Definition: This program calculates the area of a triangle using 
user-provided base and height.
Formula: Area = (base * height) / 2
*/

#include <iostream>  // header file for input-output operations
using namespace std; // using standard namespace

int main() {
    float b,h,Area; // variables for base, height, and area

    // Input: user provides base and height
    cout<<"Enter the base:";
    cin>>b; // read base from user

    cout<<"Enter the height: ";
    cin>>h; // read height from user

    // Processing: calculate area using formula
    Area = (b * h) / 2;

    // Output: display area
    cout<<"The Area of triangle is:"<<Area;

    return 0; // ends the program
}




