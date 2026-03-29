/*
Program Name: Vector in C++ using Iterators and For-Each Loop

Definition:
A vector in C++ is a dynamic array that can grow and shrink in size.
It is part of the Standard Template Library (STL).

Description:
- A vector is initialized with some values.
- New elements are added using push_back().
- Last element is removed using pop_back().
- Elements are displayed using iterator and for-each loop.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Initializing vector
    vector<int> v = {2, 4, 6, 8};

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Removing last element (30)
    v.pop_back();

    cout << "Displaying values using iterator" << endl;

    // Iterator declaration
    vector<int>::iterator itr;

    // Traversing using iterator
    for(itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << "Displaying values using for-each loop" << endl;

    // Traversing using for-each loop
    for(int x : v)
    {
        cout << x << endl;
    }

    return 0;
}