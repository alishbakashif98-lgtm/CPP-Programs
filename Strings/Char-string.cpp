/*
Program Name: Find Last Occurrence of Character Using strrchr()

Definition:
A string is a sequence of characters stored in a character array
and ends with a null character '\0'.

strrchr() Function:
strrchr() is a function from <cstring> library.
It is used to find the **last occurrence** of a character in a string.
- Syntax: char* strrchr(const char *str, int character);
- Returns a pointer to the last occurrence of the character.
- Returns NULL if the character is not found.

strchr() Function:
strchr() is a function from <cstring> library.
It is used to find the **first occurrence** of a character in a string.
- Syntax: char* strchr(const char *str, int character);
- Returns a pointer to the first occurrence of the character.
- Returns NULL if the character is not found.

Purpose:
This program demonstrates how to find the last occurrence of a character
in a string using strrchr().
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char s[20] = "Programming";

    // Find last occurrence of 'm'
    char *ptr = strrchr(s, 'm');

    if(ptr != NULL)
        cout << "Last occurrence of 'm': " << ptr;  // Prints from last 'm' to end
    else
        cout << "Character not found";

    return 0;
}
