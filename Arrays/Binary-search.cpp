/*
Program Name: Binary Search in a Sorted Array

Definition:
This program takes a sorted array and searches a given
key using binary search. It displays the index if the
key is found or informs if the key is not present.

Binary Search Definition:
Binary search is a searching technique used on sorted
arrays. The array is repeatedly divided into two halves
and the key is compared with the middle element. 
If the key is smaller, search in the left half; if larger,
search in the right half. This continues until the key
is found or the array ends.

While Loop Definition:
A while loop is used when the number of iterations is
not known in advance. The loop continues as long as
the condition remains true.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int A[10] = {12, 20, 23, 27, 32, 45, 50, 62, 65, 70};
    // A → sorted integer array of size 10

    int i, key, mid, h = 9, l = 0;
    // key → value to search
    // mid → middle index
    // l   → low index
    // h   → high index

    // asking user to enter the key
    cout << "Enter the key : ";
    cin >> key;

    // binary search using while loop
    while (l <= h) {

        mid = (l + h) / 2;  // calculating middle index

        if (key == A[mid]) {
            cout << "Key is found at index " << mid;
            return 0;  // key found, end program
        }

        else if (key < A[mid])
            h = mid - 1;  // search in left half
        else
            l = mid + 1;  // search in right half
    }

    // if key is not found
    cout << "Key is not found";

    return 0;  // program ends successfully
}
