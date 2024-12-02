#include<stdio.h>

void sum(void);  // Function prototype

int main() {
	sum();  // Call to sum function with a semicolon
	return 0;
}

void sum(void) {
	int n1 = 20, n2 = 30, res;
	res = n1 + n2;
	printf("Total: %d\n", res);
}

