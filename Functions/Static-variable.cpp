/*
Program Name: Static Variable Demonstration

Definition:
A static variable in C++:
- Retains its value between function calls.
- It is initialized only once.
- It is not destroyed when the function ends.
- Default value (if not initialized) is 0.

Characteristics:
1. Scope:
   - It is local to the function where it is declared.
   - Cannot be accessed outside that function.

2. Lifetime:
   - Exists for the entire program.
   - Value persists between function calls.

Use Case:
Static variables are useful when you want to remember
previous values across function calls.
*/

#include<iostream>
using namespace std;

void fun() {
    // Static variable (initialized only once)
    static int s = 10;

    /*
    Explanation:
    - This variable is initialized only the first time function runs.
    - Next time function is called, value is remembered.
    */
    s++;

    cout << s << endl;
}

int main() {

    cout << "First time the value is: ";
    fun();  // Output: 11

    cout << "Second time the value is: ";
    fun();  // Output: 12 (value is retained)

    return 0;
}