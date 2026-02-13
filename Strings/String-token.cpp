/*
Program Name: String Tokenization Using strtok()

Definition:
strtok() is a function from <cstring> library.
It is used to break a string into smaller parts
called tokens based on a delimiter.

Syntax:
char* strtok(char* string, const char* delimiter);

- First call: pass the string.
- Next calls: pass NULL to continue splitting.
- Returns NULL when no tokens are left.

Purpose:
This program splits the string based on ';'
and prints each part separately.
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char s[20] = "x=10;y=25;z=56";

    // First token
    char *token = strtok(s , ";");

    // Loop until no tokens left
    while(token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL , ";");
    }

    return 0;
}
