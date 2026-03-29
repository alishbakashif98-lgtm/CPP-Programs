/*
Program Name: Use of Smart Pointer in C++

Definition:
Smart pointers are objects that manage dynamic memory automatically.
They help avoid memory leaks by deleting the object when it is no longer needed.

Description:
- This program uses unique_ptr (a smart pointer).
- It automatically deletes the memory when the pointer goes out of scope.
*/

#include<iostream>
#include<memory>   // Required for smart pointers
using namespace std;

int main()
{
    // Creating a smart pointer
    unique_ptr<int> ptr = make_unique<int>(10);

    cout << "Value: " << *ptr << endl;

    // No need to delete, memory is freed automatically

    return 0;
}