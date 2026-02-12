/*
Program Name: Find Substring Using strstr()

Definition:
A string is a sequence of characters stored in a character array ending with '\0'.

strstr() Function:
strstr() is a function from <cstring> library.
It is used to find the first occurrence of a substring in a string.
Syntax: char* strstr(const char *str1, const char *str2);
- str1: main string
- str2: substring to search

If substring is found: returns pointer to first occurrence in str1
If not found: returns NULL

Purpose:
This program demonstrates how to search for a substring within a string
using strstr() in C++.
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char s1[20] = "Programming";
    char s2[20] = "gram";

    // Find first occurrence of s2 in s1
    char *ptr = strstr(s1, s2);

    if(ptr != NULL)
        cout << "Substring found: " << ptr;  // Prints substring starting from occurrence
    else
        cout << "Substring not found";

    return 0;
}
