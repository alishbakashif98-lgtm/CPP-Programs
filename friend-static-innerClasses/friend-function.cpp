/*
Program Name: Friend Function in C++

Definition:
A Friend Function is a function that is not a member of a class
but it is allowed to access the private and protected members of the class.
It is declared using the keyword 'friend' inside the class.
*/

#include<iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    // Constructor
    Number(int x)
    {
        a = x;
    }

    // Friend function declaration
    friend void show(Number n);
};

// Friend function definition
void show(Number n)
{
    // Accessing private member of class
    cout << "Value of a: " << n.a;
}

int main()
{
    Number obj(10);

    // Calling friend function
    show(obj);

    return 0;
}