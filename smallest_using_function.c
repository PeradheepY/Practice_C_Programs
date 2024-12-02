#include <stdio.h>

int findSmallest(int a, int b, int c) {
    int small;

    if (a < b) {
        if (a < c) {
            small = a;
        } else {
            small = c;
        }
    } else {
        if (b < c) {
            small = b;
        } else {
            small = c;
        }
    }

    return small;
}

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int smallest = findSmallest(a, b, c);

    printf("The smallest number is: %d\n", smallest);

    return 0;
}

