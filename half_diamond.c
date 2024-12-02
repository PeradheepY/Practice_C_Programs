#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Upper half of the mirrored diamond
    for (i = 1; i <= rows; i++) {
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the mirrored diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

