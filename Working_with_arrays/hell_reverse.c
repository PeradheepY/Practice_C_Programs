#include <stdio.h>

int main() {
    char arr[] = "hell";  
    int length = sizeof(arr) / sizeof(arr[0]);  

   
    for (int i = 0, j = length - 2; i < j; i++, j--) { 
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed string: %s\n", arr);

    return 0;
}

