#include <stdio.h>

// Function to check if a number is even
int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    
    printf("\nEnter The Value: ");
    scanf("%d", &n);

    // Check if the number is even or odd using the isEven function
    if (isEven(n)) {
        printf("\n%d is an even number.\n", n);
    } else {
        printf("\n%d is an odd number.\n", n);
    }

    return 0;
}

