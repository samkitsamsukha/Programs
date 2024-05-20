/*Title - to input and display array using pointers.*/
// Author - Samkit Samsukha
// Date - 20.05.2024

#include <stdio.h>

int main()
{
    int nums[5];
    int *p = nums; // initialise the pointer
    printf("Enter array elements: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }
    printf("Input Array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}