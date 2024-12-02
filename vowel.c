#include <stdio.h>

int isVowel(char ch) {
    // Convert uppercase letters to lowercase manually
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }
    // Check if character is a vowel
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    int i = 0, vowelCount = 0;

    printf("Enter a string: ");
    gets(str); // Read input string (note: gets is unsafe, prefer fgets in modern C)

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

