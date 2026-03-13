/*
Program Name: Inner (Nested) Class in C++

Definition:
A Nested or Inner Class is a class that is defined **inside another class**.
The inner class can access the members of the outer class only if they are
declared appropriately. Inner classes help in logically grouping classes together.
*/

#include<iostream>
using namespace std;

class Outer
{
private:
    int outerVar;

public:
    // Constructor for Outer class
    Outer(int x)
    {
        outerVar = x;
    }

    // Inner (Nested) Class
    class Inner
    {
    private:
        int innerVar;

    public:
        // Constructor for Inner class
        Inner(int y)
        {
            innerVar = y;
        }

        // Function to display Inner class value
        void displayInner()
        {
            cout << "Inner class variable: " << innerVar << endl;
        }
    };

    // Function to display Outer class variable
    void displayOuter()
    {
        cout << "Outer class variable: " << outerVar << endl;
    }
};

int main()
{
    // Creating object of Outer class
    Outer o1(100);

    // Creating object of Inner class
    Outer::Inner i1(50);

    // Display values
    o1.displayOuter();
    i1.displayInner();

    return 0;
}