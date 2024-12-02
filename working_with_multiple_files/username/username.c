// username.c

#include <stdio.h>
#include <string.h>
#include "username.h"

// Function to check if the username is at least 8 characters long
int isValidUsername(char username[]) {
    return strlen(username) >= 8;
}

// Function to get a valid username from the user
void getUsername(char username[]) {
    while (1) {
        printf("Input a username (at least 8 characters): ");
        scanf("%s", username);  // Read the user input

        // Check if the username is valid
        if (isValidUsername(username)) {
            break;  // Exit loop if valid
        } else {
            printf("Error: Username must be at least 8 characters long.\n");
        }

        // Clear the input buffer to handle any remaining characters
        while (getchar() != '\n');
    }
}

