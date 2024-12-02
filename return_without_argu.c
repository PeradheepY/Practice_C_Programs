//Return Without Argument Function in C
#include<stdio.h>
 
int add();
 
int main()
{
    int a;
    a=add();
    printf("\n Total : %d",a);
    return 0;
}
 
int add()
{
    int a,b;
    printf("\n Enter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    return a+b;
}
