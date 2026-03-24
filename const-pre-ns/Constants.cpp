/*
Program Name: Simple Program using const in C++

Definition:
The 'const' keyword is used to make a variable constant,
which means its value cannot be changed once assigned.

Description:
- A const variable is declared.
- A normal variable is also used for comparison.
- The program shows that const value cannot be modified.
*/

#include<iostream>
using namespace std;

int main()
{
    const int fixedValue = 100;   // const variable
    int normalValue = 50;         // normal variable

    cout << "Const Value: " << fixedValue << endl;
    cout << "Normal Value: " << normalValue << endl;

    // Changing normal variable
    normalValue = 80;
    cout << "Updated Normal Value: " << normalValue << endl;

    // fixedValue = 200; ❌ Error (cannot change const variable)

    return 0;
}