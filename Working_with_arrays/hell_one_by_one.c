#include <stdio.h>

int main() {
    char arr[10];      
    char copy[10];     

   
    printf("Enter a string: ");
    scanf("%s", arr); 

    
    for (int i = 0; arr[i] != '\0'; i++) {
        copy[i] = arr[i]; 
        
    }

    
    printf("Copied string: %s\n", copy);

    return 0;
}

