#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    int small;

    
    if (a < b) {
        if (a < c) {
            
        } else {
            small = c; 
        }
    } else {
        if (b < c) {
            small = b; 
        } else {
            small = c; 
        }
    }

    
    printf("The smallest number is: %d\n", small);

    return 0;
}

