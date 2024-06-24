// Title: Program in C to find the power of a number using functions and pointers.
// Author: Samkit Samsukha
// Date: 03.06.2024

#include <stdio.h>

void power(int *a, int *b, int *result) {
    int ans = 1;
    for(int i = 0; i < *b; i++) {
        ans = ans * (*a);
    }
    *result = ans;
}

int main() {
    int n, p, res;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &p);
    power(&n, &p, &res);
    printf("Result: %d\n", res);
    return 0;
}
