//No Return Without Argument Function in C
/*
    1.Function Declaration
    2.Function Definition
    3.Function Calling
 
*/
#include<stdio.h>
 
//Function Declaration
void add();
 
int main()
{
    //Function Calling
    add();
    return 0;
}
//Function Definition
void add()
{
    int a,b,c;
    printf("\n Enter The Value of A & B :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Total : %d",c);
}
