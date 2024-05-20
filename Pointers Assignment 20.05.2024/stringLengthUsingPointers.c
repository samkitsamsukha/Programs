/*Title - to find string length using pointers.*/
// Author - Samkit Samsukha
// Date - 20.05.2024

#include <stdio.h>

int main()
{
    char str[] = "Hello world!";
    int length = 0;
    char *ptr = str;    
    while (*ptr != '\0')
    {
        ptr++;
        length++;
    }
    printf("Length of \"%s\" is %d\n", str, length);
    return 0;
}