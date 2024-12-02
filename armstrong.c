#include <stdio.h>

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int d1, d2, d3, a;
    
    d3 = n % 10;       // Extract the last digit
    a = n / 10;
    d2 = a % 10;       // Extract the second digit
    d1 = a / 10;       // Extract the first digit
    
    // Calculate the sum of cubes of digits
    a = cube(d1) + cube(d2) + cube(d3);
    
    // Return 1 if the sum equals the original number; otherwise, return 0
    return (a == n);
}

int main() {
    int n;
    
    printf("\nEnter a 3-Digit Number: ");
    scanf("%d", &n);

    // Check if the number is an Armstrong number
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}

