/*Title - to add two numbers using pointers.*/
// Author - Samkit Samsukha
// Date - 20.05.2024

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 7;
    int *p1 = &a; // assing address of a to p1
    int *p2 = &b; // assign address of b to p2
    int sum = *(p1) + *(p2);
    printf("Sum of %d and %d is %d", *(p1), *(p2), sum);
    return 0;
}