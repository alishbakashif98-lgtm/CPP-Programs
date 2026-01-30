/*
Program Definition:
This program prints the word "Hello" 10 times using a while loop.
A while loop executes a block of code repeatedly as long as a given condition is true.
*/

#include<iostream>
using namespace std;

int main(){

    int i = 1; // initialize counter variable i to 1

    while( i<=10) // loop runs while i is less than or equal to 10
    {
        cout<<"Hello"<<endl; // print "Hello" followed by a new line
        i++; // increment i by 1 each iteration
    }

    return 0; // end of program
}
