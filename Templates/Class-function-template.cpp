/*
Program Name: Class Template and Function Template in C++

Definition:
Templates in C++ allow us to write generic code. A class template
allows creating objects of different data types, while a function
template allows functions to work with multiple data types.

Description:
- A class template Calculator is created.
- It has a function to display values.
- A separate function template is used to add two numbers.
*/

#include<iostream>
using namespace std;

// Function Template
template <class T>
T add(T a, T b)
{
    return a + b;
}

// Class Template
template <class T>
class Calculator
{
private:
    T x, y;

public:
    // Constructor
    Calculator(T a, T b)
    {
        x = a;
        y = b;
    }

    // Member function
    void display()
    {
        cout << "Values: " << x << " and " << y << endl;
        cout << "Sum: " << add(x, y) << endl;
    }
};

int main()
{
    // Using class template with int
    Calculator<int> c1(2, 3);
    c1.display();

    // Using class template with float
    Calculator<float> c2(2.5, 3.5);
    c2.display();

    return 0;
}