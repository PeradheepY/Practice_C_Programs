#include<stdio.h>
int main() {
	int a, b, c;

	printf("Enter the numbers: ");
	scanf("%d%d%d ", &a,&b,&c);

	if( a <= b && a <= c ){
		printf("A is smaller than b and c %d\n", a);
	} else if( b<= a && b<=c ) {
		printf("B is smaller than a and c %d\n", b);
	} else {
		printf("C is smaller %d\n",c);
	}
    	return 0;
}


