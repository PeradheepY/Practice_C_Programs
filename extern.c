#include <stdio.h>

int y = 10;

int main() {
    int y = 12;
    {
        extern int y;
        printf("%d\n", y); 
    }
    printf("%d\n", y); 
    return 0; 
}

