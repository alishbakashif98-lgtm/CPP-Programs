/*
Program Name: Recursion Demonstration

Definition:
Recursion is a process in which a function calls itself.
It is used to solve problems that can be broken into smaller
subproblems.

Working of this program:
- Function fun(n) prints n
- Then calls itself with (n-1)
- This continues until n becomes 0
- Base condition (if n > 0) prevents infinite recursion

Base Condition:
if (n > 0)
Without base condition, recursion will run infinitely.
*/

#include<iostream>
using namespace std;

void fun(int n) {

    if (n > 0) {
        cout << n << endl;  // Print current value
        fun(n - 1);          // Recursive call with decreased value
    }
}

int main() {

    int x = 5;
    fun(x);  // Start recursion from 5

    return 0;
}