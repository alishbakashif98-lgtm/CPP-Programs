/*
Program Name: Linear Search Using Function

Definition:
Linear search is a searching technique that:
- Traverses the array element by element.
- Compares each element with the key.
- If match is found, returns its index.
- If not found, returns default value (in this case 0).

Characteristics:
1. Time Complexity: O(n)
2. Works on unsorted arrays.
3. Simple searching technique.

Working:
- Function Search() loops through array.
- If key matches an element, index is returned.
- If not found, function returns 0 (as per given code).
*/

#include<iostream>
using namespace std;

/*
Function: Search
Definition:
- Searches for key in array.
Parameters:
- A[] : array
- n   : size of array
- key : value to search
Return:
- Index of key if found
- 0 if not found (as per code logic)
*/
int Search(int A[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(key == A[i])
            return i;  // Return index if element is found
    }

    return 0; // Return 0 if element is not found
}

int main()
{
    int A[] = {2, 4, 5, 7, 10, 9, 13};

    int k;
    cout << "Enter an Element to be Searched: ";
    cin >> k;

    int index = Search(A, 7, k);

    cout << "Element found at index: " << index << endl;

    return 0;
}