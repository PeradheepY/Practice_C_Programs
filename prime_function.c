#include <stdio.h>

int isPrime(int number) {
    if (number < 2) return 0;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

void getNumberAndCheckPrime() {
    int number;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &number);
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
}

int main() {
    getNumberAndCheckPrime();
    return 0;
}

