/*
Program Name: String Copy Using strcpy()

Definition:
A string is a sequence of characters stored in a character array
and it ends with a null character '\0'.

strcpy() Function:
strcpy() is a function from <cstring> library.
It is used to copy one string into another.
The content of the second string is copied into the first string.

Syntax:
strcpy(destination, source);

Important:
The destination array must have enough space
to store the copied string.
*/

#include<iostream>
#include<cstring>

using namespace std;

int main(){

    // Source string
    char s1[20] = "Good";

    // Destination string (empty initially)
    char s2[20];

    // Copying s1 into s2
    strcpy(s2 , s1);

    // Displaying copied string
    cout << "Copied String: " << s2;

    return 0;
}
