#include <stdio.h>
int main() {
    int i = 0;
    int arr[4]; 
    int sum = 0; 
    float average; 

    
    printf("Enter 4 integers:\n");
    for (i = 0; i < 4; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Calculate the sum of the elements
    for (i = 0; i < 4; i++) {
        sum += arr[i];
    }

    // Calculate the average
    average = (int)sum / 4;

    // Print the results
    printf("\nThe sum of the elements is: %d\n", sum);
    printf("The average of the elements is: %d\n", average);

    return 0;
}

