#include <stdio.h>

int main() {
    int limit = 20;  // Specify the limit for even numbers
    int num = 2;     // Start with the first even number
    int sum = 0;     // Variable to store the sum of cubes

    while (num <= limit) {
        // Calculate the cube of the current even number
        int cube = num * num * num;
        
        // Add the cube to the sum
        sum += cube;

        // Move to the next even number
        num += 2;
    }

    printf("Sum of cubes of even numbers up to %d: %d\n", limit, sum);

    return 0; 
}

