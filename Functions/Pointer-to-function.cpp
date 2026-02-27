/*
Program Name: Function Pointer Example (Max & Min Using Pointers)

Definition:
Function pointer is a pointer that stores the address of a function.
- It allows dynamic function calls.
- Functions can be called through pointers.
- Useful for callbacks and dynamic behavior.

Characteristics:
1. Points to functions having same signature.
2. Can switch functions at runtime.
3. Useful in advanced programming.

Working:
- Function pointer fp is declared.
- It first points to max function and calls it.
- Then it points to min function and calls it.
*/

#include <iostream>
using namespace std;

/*
Function: max
Definition:
- Returns larger of two numbers.
Parameters:
- x : first integer
- y : second integer
Return:
- Greater value of x and y
*/
int max(int x, int y)
{
    return x > y ? x : y; // return larger number
}

/*
Function: min
Definition:
- Returns smaller of two numbers.
Parameters:
- x : first integer
- y : second integer
Return:
- Smaller value of x and y
*/
int min(int x, int y)
{
    return x < y ? x : y; // return smaller number
}

int main()
{
    // Function pointer that can point to functions
    // having (int, int) parameters and returning int
    int (*fp)(int, int);

    // Point function pointer to max function
    fp = max;
    int maximum = (*fp)(10, 5); // call max through pointer
    cout << "Maximum: " << maximum << endl;

    // Now point function pointer to min function
    fp = min;
    int minimum = (*fp)(10, 5); // call min through pointer
    cout << "Minimum: " << minimum << endl;

    return 0;
}