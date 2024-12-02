
#include <stdio.h>
#include "vowel.h"

int main() {
    char str[100];
    int i = 0, vowelCount = 0;

    printf("Enter a string: ");
    gets(str); // Read input string

    // Check each character in the string
    while (str[i] != '\0') {
        if (isVowel(str[i])) {
            vowelCount++; // Increase count if the character is a vowel
        }
        i++;
    }

    printf("The number of vowels in the string is: %d\n", vowelCount);

    return 0;
}

