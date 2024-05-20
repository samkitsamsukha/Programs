/*Title - to create, initialize and use pointers.*/
// Author - Samkit Samsukha
// Date - 20.05.2024

#include <stdio.h>

int main()
{
    int nums[] = {2, 4, 6, 8, 10};
    int *ptr = nums;      // points to first element of nums
    printf("%d\n", *ptr); // prints first element of nums using  pointer
    ptr++;                // moves pointer to next element
    printf("%d\n", *ptr); // prints second element of nums using  pointer
    (*ptr)++;
    printf("%d\n", *ptr); // prints second element of nums after incrementing by one using  pointer
    return 0;
}