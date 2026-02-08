/*
Program Name: Dynamic Array Using Heap Memory

Definition:
Heap memory is a type of dynamic memory that is allocated at runtime.
In C++, heap memory is allocated using the 'new' keyword and released
using the 'delete' keyword. It allows the program to change the size
of memory during execution.

Purpose:
This program demonstrates dynamic allocation of an array using heap memory.
First, an array is created dynamically, then it is deleted, and after that
a new array is allocated to show how memory can be modified at runtime.
*/

#include<iostream>
using namespace std;

int main(){

    int n;

    // Taking array size from user
    cout << "Enter the size of array : ";
    cin >> n;

    // Allocating array dynamically in heap memory
    int *p = new int[n];

    // Taking array elements as input
    cout << "Enter the elements : " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    // Displaying array elements
    cout << "The elements of array that you have entered are : " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    // Releasing heap memory
    delete[] p;
    p = nullptr;

    cout << "Old array deleted successfully" << endl;

    // Taking new size for array
    cout << "Enter new size of array: ";
    cin >> n;

    // Allocating new array dynamically
    p = new int[n];

    // Taking new elements as input
    cout << "Enter new elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    // Displaying new array elements
    cout << "New array elements are: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    // Freeing memory again
    delete[] p;
    p = nullptr;

    return 0;
}
