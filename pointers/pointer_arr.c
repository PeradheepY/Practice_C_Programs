#include<stdio.h>

int main(){
    int arr[]={ 1,2,3,4,5};
    int *ptr=arr;
    printf("Array elements using pointer:\n");

    for (int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
        }
    printf("\n");
    return 0;
}