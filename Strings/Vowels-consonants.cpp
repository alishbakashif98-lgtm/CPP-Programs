/*
Program Name: Count Vowels, Consonants and Words

Definition:
A string is a sequence of characters.

Vowels:
Letters A, E, I, O, U (both uppercase and lowercase).

Consonants:
All letters except vowels.

Words:
Total number of words in a sentence.
Formula:
Number of spaces + 1

Purpose of Program:
This program traverses a string character by character
and counts total vowels, consonants, spaces and words.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    // Initialize string
    string str = "How are you";

    // Declare counters
    int vowels = 0;
    int consonants = 0;
    int space = 0;
    int words = 0;

    // Loop runs until end of string ('\0')
    for ( int i = 0 ; str[i] != '\0' ; i++ )
    {
        // Check if character is a vowel
        if ( str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || 
             str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            // Increase vowel counter
            vowels++ ;
        }

        // Check if character is space
        else if ( str[i] == ' ')
        {
            // Increase space counter
            space++;
        }

        // All remaining characters are counted as consonants
        else
        {
            consonants++;
        }
    }

    // Total words = total spaces + 1
    words = space + 1;

    // Display results
    cout << "Vowels are " << vowels << endl ;
    cout << "Consonants are " << consonants << endl ;
    cout << "Words are " << words << endl ;

    return 0 ;
}
