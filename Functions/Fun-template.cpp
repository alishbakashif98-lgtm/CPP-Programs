/*
Program Name: Function Template Example

Definition:
A template allows us to write a generic function
that works with different data types.

Instead of writing separate functions for int,
float, etc., we use a template.

Here, maxim() works for any data type
that supports comparison ( > ).
*/

#include<iostream>
using namespace std;

// Template definition
template<class T>
T maxim(T a, T b)
{
    return (a > b) ? a : b;   // Ternary operator
}

int main(){

    cout << "Maximum in two integers: "
         << maxim(23, 4) << endl;

    cout << "Maximum in two floats: "
         << maxim(5.1f, 4.7f) << endl;

    return 0;
}
