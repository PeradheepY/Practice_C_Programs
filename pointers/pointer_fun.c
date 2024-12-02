#include <stdio.h>

void add(int a, int b)
{
    printf("sum : %d\n", a + b);
}

void subtract(int a, int b)
{
    printf("diff : %d\n", a - b);
}

int main()
{

    void (*operations[])(int , int) = {&add, &subtract};

    for (int i = 0; i < 2; i++)
    {
        operations[i](10, 5);
    }
}