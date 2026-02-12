/*
Program Name: Compare Two Strings Using strcmp()

Definition:
A string is a sequence of characters stored in a character array
and ends with a null character '\0'.

strcmp() Function:
strcmp() is a function from <cstring> library.
It is used to compare two strings lexicographically (dictionary order).
- Syntax: strcmp(string1, string2);

Return Value:
- 0   → if str1 is equal to str2
- <0  → if str1 is less than str2
- >0  → if str1 is greater than str2

Purpose:
This program demonstrates how to compare two strings
and determine their lexicographical order using strcmp().
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char s1[20] = "minor";
    char s2[20] = "elder";

    // Compare strings
    int result = strcmp(s1, s2);

    if(result == 0)
        cout << "Strings are equal";
    else if(result < 0)
        cout << "'" << s1 << "' is less than '" << s2 << "'";
    else
        cout << "'" << s1 << "' is greater than '" << s2 << "'";

    return 0;
}
