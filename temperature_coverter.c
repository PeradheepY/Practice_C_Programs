#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

void temperatureConverter() {
    char choice;
    float temp;

    printf("Enter 'C' to convert Celsius to Fahrenheit, or 'F' to convert Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("Temperature in Fahrenheit: %.2f\n", celsiusToFahrenheit(temp));
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("Temperature in Celsius: %.2f\n", fahrenheitToCelsius(temp));
    } else {
        printf("Invalid choice.\n");
    }
}

int main() {
    temperatureConverter();
    return 0;
}

