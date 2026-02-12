/*
Program Name: String Concatenation Using strcat()

Definition:
A string is a sequence of characters stored in a character array
and it ends with a null character '\0'.

strcat() Function:
strcat() is a function from <cstring> library.
It is used to concatenate (join) two strings.
It appends the second string at the end of the first string.

Important Rule:
The destination array (first string) must have enough space
to store both strings including the null character,
otherwise it may cause buffer overflow.

Purpose:
This program demonstrates how to join two strings
using strcat() function in C++.
*/

#include<iostream>
#include<cstring>

using namespace std;

int main(){

    // First string with enough size
    char s1[20] = "Good ";

    // Second string
    char s2[20] = "Morning";

    // Concatenating s2 to s1
    strcat(s1 , s2);

    // Displaying result
    cout << "Concatenated String: " << s1;

    return 0;
}
