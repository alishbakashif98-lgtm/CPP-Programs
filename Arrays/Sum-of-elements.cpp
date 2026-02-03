#include<iostream>
using namespace std;
int main(){

int A[5] = {3,4,9,15,6} ;
int sum = 0 ;

for ( int i=0 ; i<=4 ; i++ )
{
    sum = sum + A[i];
}

cout << "Sum of elements of array is : " << sum ;
return 0;

}/*
Program Name: Sum of Array Elements

Definition:
This program stores elements in an array and calculates
the sum of all elements of the array using a for loop.

Array Definition:
An array is a collection of elements of the same data
type stored at contiguous memory locations.

For Loop Definition:
A for loop is used when the number of iterations is
known in advance. It repeats a block of code a fixed
number of times.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int A[5] = {3, 4, 9, 15, 6};
    // A → integer array of size 5

    int sum = 0;  // variable to store sum of array elements

    // for loop to calculate sum of array elements
    for (int i = 0; i <= 4; i++) {

        sum = sum + A[i];   // adding each element to sum
    }

    // displaying the sum
    cout << "Sum of elements of array is : " << sum;

    return 0;  // program ends successfully
}
