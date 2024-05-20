/*Title - to copy one array to another using pointers.*/
// Author - Samkit Samsukha
// Date - 20.05.2024

#include <stdio.h>

int main()
{
    int nums[4] = {1, 2, 3, 4};
    int *p1 = nums;
    int arr[4];
    int *p2 = arr;
    for (int i = 0; i < 4; i++)
    {
        // copying elements from one array to another
        *(p2 + i) = *(p1 + i);
    }
    for (int i = 0; i < 4; i++)
    {
        // printing the new array
        printf("%d ", *(p2+i));
    }
    return 0;
}