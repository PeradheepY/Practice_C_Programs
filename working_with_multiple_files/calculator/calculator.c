// calculator.c
#include <stdio.h>
#include "calculator.h"  // Include the header file

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return b != 0 ? a / b : 0; }

void calculator() {
    float num1, num2;
    char operator;

    printf("Enter an operation (e.g., 5 + 3): ");
    scanf("%f %c %f", &num1, &operator, &num2);

    if (operator == '+') {
        printf("Result: %.2f\n", add(num1, num2));
    } 
    else if (operator == '-') {
        printf("Result: %.2f\n", subtract(num1, num2));
    } 
    else if (operator == '*') {
        printf("Result: %.2f\n", multiply(num1, num2));
    } 
    else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2f\n", divide(num1, num2));
        } else {
            printf("Error: Division by zero!\n");
        }
    } 
    else {
        printf("Invalid operator\n");
    }
}

