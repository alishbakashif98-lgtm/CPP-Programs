/*
Program Name: Friend Class Example in C++

Definition:
A Friend Class is a class that can access the private and protected
members of another class when it is declared using the keyword 'friend'.
*/

#include<iostream>
using namespace std;

class Number
{
private:
    int a;
    int b;

public:
    Number()
    {
        a = 5;
        b = 10;
    }

    // Declaring Calculator as friend class
    friend class Calculator;
};

class Calculator
{
public:
    void add(Number n)
    {
        // Accessing private members of Number class
        cout << "Sum = " << n.a + n.b;
    }
};

int main()
{
    Number n1;
    Calculator c1;

    // Calling function of Calculator class
    c1.add(n1);

    return 0;
}