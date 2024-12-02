#include <stdio.h>

// Function to generate the next term in the Fibonacci sequence
int generateNextTerm(int firstTerm, int secondTerm) {
    return firstTerm + secondTerm;
}

// Function to print the Fibonacci sequence up to the specified count
void printFibonacci(int count) {
    int firstTerm = 0, secondTerm = 1;

    printf("First %d Fibonacci numbers:\n", count);

    for (int i = 1; i <= count; i++) {
        printf("%d, ", firstTerm);  // Print the current term
        int nextTerm = generateNextTerm(firstTerm, secondTerm);  // Calculate the next term
        firstTerm = secondTerm;  // Update first term
        secondTerm = nextTerm;   // Update second term
    }
    printf("\n");  // Print a newline at the end
}

int main() {
    int count;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &count);

    printFibonacci(count);

    return 0;
}

