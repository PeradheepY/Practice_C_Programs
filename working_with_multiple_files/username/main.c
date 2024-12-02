// main.c

#include <stdio.h>
#include "username.h"

int main() {
    char username[20];  // Array to store the username

    getUsername(username);  // Call the function to get a valid username

    printf("Valid username entered: %s\n", username);

    return 0;
}

