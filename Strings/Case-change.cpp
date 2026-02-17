/*
Program Name: Convert Uppercase to Lowercase

Definition:
In ASCII table:
'A' to 'Z'  → 65 to 90
'a' to 'z'  → 97 to 122

Difference between uppercase and lowercase letters = 32

So, adding 32 converts uppercase to lowercase.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "WELCOME";

    for(int i = 0; str[i] != '\0'; i++)
    {
        // Check if character is uppercase
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    cout << "Lowercase string: " << str;

    return 0;
}
