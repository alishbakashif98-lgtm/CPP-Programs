/*
Program Name: Demonstration of Catch in C++

Definition:
The 'catch' block in C++ is used to handle exceptions thrown by the
'throw' keyword. It catches the error and prevents the program from crashing.

Description:
- Different types of exceptions are thrown (int, double, char).
- Multiple catch blocks are used to handle each type.
- A default catch(...) is also used to handle unknown exceptions.
*/

#include<iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter choice (1,2,3): ";
    cin >> choice;

    try
    {
        if(choice == 1)
            throw 10;        // int exception
        else if(choice == 2)
            throw 2.5;       // double exception
        else if(choice == 3)
            throw 'A';       // char exception
        else
            throw "Error";   // unknown exception
    }

    // Catch for int
    catch(int e)
    {
        cout << "Integer Exception: " << e << endl;
    }

    // Catch for double
    catch(double d)
    {
        cout << "Double Exception: " << d << endl;
    }

    // Catch for char
    catch(char c)
    {
        cout << "Character Exception: " << c << endl;
    }

    // Default catch (handles any other type)
    catch(...)
    {
        cout << "Unknown Exception occurred";
    }

    return 0;
}