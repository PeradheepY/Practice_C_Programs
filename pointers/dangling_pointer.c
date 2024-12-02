#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 100;

    printf("Value before free :%d\n",*ptr);

    free(ptr);

    printf("Value after free: %d\n",*ptr);

    return 0;
}