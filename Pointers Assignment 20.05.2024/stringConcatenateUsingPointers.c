/*Title: to concatenate strings using pointers.*/
// Author: Samkit Samsukha
// Date: 20.05.2024

#include <stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char *ptr1 = str1;
    char *ptr2 = str2;
    char str3[100];
    char *ptr3 = str3;
    while (*ptr1 != '\0')
    {
        *ptr3 = *ptr1;
        ptr1++;
        ptr3++;
    }
    while (*ptr2 != '\0')
    {
        *ptr3 = *ptr2;
        ptr2++;
        ptr3++;
    }
    printf("Concatenated string: %s", str3);
    return 0;
}