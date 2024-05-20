/*Title: to copy one string to another using pointers.*/
// Author: Samkit Samsukha
// Date: 20.05.2024

#include <stdio.h>

int main()
{
    char str1[] = "Samkit Samsukha";
    char str2[100];
    char *ptr1 = str1;
    char *ptr2 = str2;
    while (*ptr1 != '\0')
    {
        *(ptr2) = *ptr1;
        ptr1++;
        ptr2++;
    }
    printf("The string is %s", str2);
    return 0;
}