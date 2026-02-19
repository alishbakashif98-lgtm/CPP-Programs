/*
Program Name: Function Overloading Example

Definition:
Function Overloading means having multiple functions
with the same name but different parameters
(number or type of parameters).

Compiler decides which function to call
based on arguments passed.
*/

#include<iostream>
using namespace std;

// Function 1: Two integers
int sum(int x, int y){
    return x + y;
}

// Function 2: Three integers
int sum(int x, int y, int z){
    return x + y + z;
}

// Function 3: Two float numbers
float sum(float x, float y){
    return x + y;
}

int main(){

    cout << "Sum of two integers is: " 
         << sum(24, 45) << endl;

    cout << "Sum of three integers is: " 
         << sum(24, 12, 9) << endl;

    cout << "Sum of two floats is: " 
         << sum(24.9f, 48.1f) << endl;

    return 0;
}
