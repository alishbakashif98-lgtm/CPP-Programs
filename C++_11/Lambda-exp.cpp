/*
Program Name: Use of Lambda Expression in C++

Definition:
A lambda expression is an anonymous (unnamed) function that can be defined
inside the code and used immediately.

Description:
- In this program, a lambda function is created to add two numbers.
- The lambda takes two parameters and returns their sum.
- It is called just like a normal function.
*/

#include<iostream>
using namespace std;

int main()
{
    // Lambda function to add two numbers
    auto add = [](int a, int b)
    {
        return a + b;
    };

    cout << "Sum is: " << add(5, 3);  // Calling lambda function

    return 0;
}