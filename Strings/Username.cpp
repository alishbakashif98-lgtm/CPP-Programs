/*
Program Name: Extract Username from Email

Definition:
An email address has two main parts:

1. Username → Before '@'
2. Domain   → After '@'

Example:
alishba123@gmail.com

Username = alishba123
Domain   = gmail.com

Logic Used:
1. Find position of '@' symbol using find().
2. Extract characters from index 0 to position of '@'
   using substr().
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    // Store email address
    string email = "alishba123@gmail.com";

    // Find position of '@' symbol
    int i = email.find('@');

    // Extract username (from index 0 to '@' position)
    string username = email.substr(0, i);

    // Display username
    cout << "Username is " << username;

    return 0;
}
