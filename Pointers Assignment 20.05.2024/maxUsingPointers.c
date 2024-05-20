/*Title: to find maximum of two numbers using pointers.*/
// Author: Samkit Samsukha
// Date: 20.05.2024

#include <stdio.h>

int main()
{
    int a = 90;
    int b = 80;
    int *p1 = &a;
    int *p2 = &b;
    if (*p1 > *p2)
    {
        printf("Maximum is %d", *p1);
    }
    else
    {
        printf("Maximum is %d", *p2);
    }
}