/*
Program Name: Convert String to Number

Definition:
strtol() converts a string into a long integer.
strtof() converts a string into a float.

These functions are available in <cstring> library.
They are used when numbers are stored as strings
and we want to perform mathematical operations on them.
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char s1[10] = "235";
    char s2[10] = "54.78";

    // Convert string to long integer
    long int x = strtol(s1, NULL, 10);

    // Convert string to float
    float y = strtof(s2, NULL);

    cout << x + 10 << endl;   // 235 + 10 = 245
    cout << y - 5 << endl;    // 54.78 - 5 = 49.78

    return 0;
}
