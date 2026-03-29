/*
Program Name: STL Containers (vector, set, list, forward_list) in C++

Definition:
STL (Standard Template Library) provides different containers like
vector, set, list, and forward_list to store and manage data efficiently.

Description:
- vector is a dynamic array.
- set stores unique elements in sorted order.
- list is a doubly linked list.
- forward_list is a singly linked list.
*/

#include<iostream>
#include<vector>
#include<set>
#include<list>
#include<forward_list>
using namespace std;

int main()
{
    // ----------- VECTOR -----------
    vector<int> v = {1, 2, 3};

    v.push_back(4);
    v.push_back(5);

    cout << "Vector elements:" << endl;
    for(int x : v)
    {
        cout << x << " ";
    }
    cout << endl;


    // ----------- SET -----------
    set<int> s = {5, 2, 8, 2, 1}; // duplicates ignored

    cout << "\nSet elements:" << endl;
    for(int x : s)
    {
        cout << x << " ";
    }
    cout << endl;


    // ----------- LIST -----------
    list<int> l = {10, 20, 30};

    l.push_back(40);
    l.push_front(5);

    cout << "\nList elements:" << endl;
    for(int x : l)
    {
        cout << x << " ";
    }
    cout << endl;


    // ----------- FORWARD LIST -----------
    forward_list<int> fl = {100, 200, 300};

    fl.push_front(50);

    cout << "\nForward List elements:" << endl;
    for(int x : fl)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}