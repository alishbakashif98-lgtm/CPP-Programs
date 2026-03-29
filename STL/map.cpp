/*
Program Name: Map in C++

Definition:
A map in C++ is an associative container that stores elements
in key-value pairs. Each key is unique and data is stored in sorted order.

Description:
- A map is created to store student IDs and names.
- Data is inserted and displayed using loop.
*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
    // Creating map
    map<int, string> m;

    // Inserting values
    m[1] = "Ali";
    m[2] = "Ahmad";
    m[3] = "Sara";

    cout << "Displaying map elements:" << endl;

    // Traversing map
    for(auto x : m)
    {
        cout << "ID: " << x.first 
             << ", Name: " << x.second << endl;
    }

    return 0;
}