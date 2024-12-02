#include <stdio.h>

int main() {
    char arr[] = "hell";
    char copy[10]; 

    
    int length = sizeof(arr) / sizeof(arr[0]);                                                          

    
    for (int i = 0; i < length; i++) {
        copy[i] = arr[i]; 
    }
    
   
    printf("Copied string: %s\n", copy);
    
    

    return 0;
}

