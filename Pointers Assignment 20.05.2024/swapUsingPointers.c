/*Title - to swap two numbers using pointers.*/
// Author - Samkit Samsukha
// Date - 20.05.2024

#include <stdio.h>

int main()
{
    int a = 20;
    int b = 30;
    printf("a: %d, b: %d\n", a, b);
    int temp = -1;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &temp;
    *p3 = *p1;
    *p1 = *p2;
    *p2 = *p3;
    printf("a: %d, b: %d\n", a, b);
    return 0;
}