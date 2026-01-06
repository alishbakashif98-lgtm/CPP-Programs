/*
-------------------------------------------------------
Program: Bitwise Operators in C++
Definition:
Bitwise operators work on binary (0s and 1s) representation
of numbers. They perform operations bit by bit.

Bitwise Operators in C++:
1. &  (Bitwise AND)
2. |  (Bitwise OR)
3. ^  (Bitwise XOR)
4. ~  (Bitwise NOT)
5. << (Left Shift)
6. >> (Right Shift)
-------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {

    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    // Bitwise AND
    // Result is 1 only if both bits are 1
    cout << "Bitwise AND (a & b): " << (a & b) << endl;
    // 0101 & 0011 = 0001 (1)


    // Bitwise OR
    // Result is 1 if any one bit is 1
    cout << "Bitwise OR (a | b): " << (a | b) << endl;
    // 0101 | 0011 = 0111 (7)


    // Bitwise XOR
    // Result is 1 if bits are different
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;
    // 0101 ^ 0011 = 0110 (6)


    // Bitwise NOT
    // Inverts all bits (0 becomes 1, 1 becomes 0)
    cout << "Bitwise NOT (~a): " << (~a) << endl;
    // ~0101 = 1010 (two's complement form)


    // Left Shift
    // Shifts bits to the left and fills with 0
    cout << "Left Shift (a << 1): " << (a << 1) << endl;
    // 0101 << 1 = 1010 (10)
    

    // Right Shift
    // Shifts bits to the right
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;
    // 0101 >> 1 = 0010 (2)

    return 0;
}
