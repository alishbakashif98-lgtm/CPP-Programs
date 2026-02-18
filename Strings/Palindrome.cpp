/*
Program Name: Palindrome Check (Using Reverse Method)

Definition:
A palindrome is a word that reads the same
forward and backward.

Examples:
MADAM  → Palindrome
LEVEL  → Palindrome
HELLO  → Not Palindrome

Logic Used:
1. Reverse the original string.
2. Compare the reversed string with the original.
3. If both are equal → Palindrome.
   Otherwise → Not Palindrome.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    // Original string
    string str = "MADAM";

    // Empty string to store reverse
    string rev = "";

    // Loop to reverse the string
    // Start from last character and move backward
    for(int i = str.length() - 1; i >= 0; i--)
    {
        // Add each character to reverse string
        rev = rev + str[i];
    }

    // Compare original and reversed string
    if(str == rev)
        cout << str << " is a Palindrome";
    else
        cout << str << " is Not a Palindrome";

    return 0;
}
