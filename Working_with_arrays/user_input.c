#include <stdio.h>
int main() {
    int i = 0;
    int arr[4]; // Declare an array of size 4

    // Input values from the user
    printf("Enter 4 integers:\n");
    for (i = 0; i < 4; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Print the entered values
    printf("\nThe values you entered are:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

