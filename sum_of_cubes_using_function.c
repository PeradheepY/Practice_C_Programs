#include <stdio.h>

int sumOfCubesOfEvenNumbers(int limit) {
    int num = 2;     // Start with the first even number
    int sum = 0;     // Variable to store the sum of cubes

    while (num <= limit) {
        int cube = num * num * num;  // Calculate the cube of the current even number
        sum += cube;                 // Add the cube to the sum
        num += 2;                    // Move to the next even number
    }

    return sum;
}

int main() {
    int limit;

    printf("Enter the limit for even numbers: ");
    scanf("%d", &limit);

    int sum = sumOfCubesOfEvenNumbers(limit);

    printf("Sum of cubes of even numbers up to %d: %d\n", limit, sum);

    return 0; 
}

