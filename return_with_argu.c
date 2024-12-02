#include<stdio.h>

int sum(int,int);

int main()
{
	int res, n1=10, n2=30;
	res=sum(n1,n2);
	printf("result : %d", res);
	return 0;

}

int sum(int x, int y) {
	return x+y;
}
