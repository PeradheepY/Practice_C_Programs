#include<stdio.h>

int main(){
    int num = 10;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("Value of num: %d\n", num); // direct value
    printf("Value of ptr: %p\n", ptr); // address of num
    printf("Value of dptr: %p\n", dptr); // address of ptr
    printf("Dereferenced dptr: %p\n", **dptr); // value of num via double ptr

    return 0;
}