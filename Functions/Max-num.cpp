/*
Program Name: Find Maximum of Three Numbers Using Function

Definition:
A function is used to perform a specific task.
Here we create a function that returns the maximum
of three numbers.
*/

#include<iostream>
using namespace std;

// Function definition
int maxim(int a , int b , int c)
{
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}

int main(){

    int a, b, c, r;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    cout << "Enter third number : ";
    cin >> c;

    // Function call
    r = maxim(a, b, c);

    cout << "Maximum number is : " << r;

    return 0;
}
