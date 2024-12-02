#include <stdio.h>

int calculateFactorial(int num) {
    int product = 1;  // Initialize the variable to store the product

    while (num > 1) {
        product *= num;  // Multiply the current number to product
        num--;           // Decrement the number for the next iteration
    }

    return product;
}

int main() {
    int number;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    int factorial = calculateFactorial(number);

    printf("Factorial of %d is: %d\n", number, factorial);

    return 0;
}

