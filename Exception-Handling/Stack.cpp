/*
Program Name: Stack Class with Exception Handling in C++

Definition:
A Stack is a linear data structure that follows LIFO (Last In First Out).
Exception handling is used to handle errors like Stack Overflow and
Stack Underflow using throw and catch.

Description:
- A class Stack is created with fixed size.
- push() adds element, pop() removes element.
- If stack is full → Stack Overflow exception.
- If stack is empty → Stack Underflow exception.
*/

#include<iostream>
using namespace std;

class Stack
{
private:
    int arr[5];   // Stack size = 5
    int top;

public:
    // Constructor
    Stack()
    {
        top = -1;
    }

    // Push function
    void push(int x)
    {
        if(top == 4)
            throw "Stack Overflow";
        else
        {
            top++;
            arr[top] = x;
        }
    }

    // Pop function
    int pop()
    {
        if(top == -1)
            throw "Stack Underflow";
        else
        {
            return arr[top--];
        }
    }
};

int main()
{
    Stack s;

    try
    {
        // Pushing elements
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);   // Overflow

        // Popping elements
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;  // Underflow
    }

    catch(const char* msg)
    {
        cout << msg;
    }

    return 0;
}