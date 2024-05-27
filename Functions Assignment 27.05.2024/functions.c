// Title: Use of functions which have been defined in myhead.h header file
// Author: Samkit Samsukha
// Date: 27.05.2024

#include "myhead.h"
#include <stdio.h>

int main(){

    // 1. Finding square
    int n = 4;
    printf("The square of %d is %d\n\n", n, square(n));

    // 2. Swapping two numbers
    int a = 3;
    int b = 4;
    printf("Before swapping -> a: %d, b %d\n", a, b);
    swap(&a, &b);
    printf("After swapping -> a: %d, b %d\n\n", a, b);

    // 3. Check Prime number
    int num = 7;
    if(isPrime(num)){
        printf("%d is a prime number\n\n", num);
    }
    else{
        printf("%d is a composite number\n\n", num);
    }

    // 4. Largest element in array
    int arr[] = {1, 2, 5, 3, 8 , 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int maximum = maxElement(arr, len);
    printf("Maximum element is: %d\n\n", maximum);

    // 5.a. Length of string
    char str[] = "Samkit";
    int length = stringLength(str);
    printf("Length of \"%s\" is %d\n\n", str, length);

    // 5.b. Concatenate two strings
    char str1[] = "RVCE";
    char str2[] = " Bengaluru";
    char result[100];
    stringConcat(str1, str2, result);
    printf("Concatenated String is: %s\n\n", result);

    // 6. Sum of array elements
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numsLen = sizeof(nums)/sizeof(nums[0]);
    int arrSum = arraySum(nums, numsLen);
    printf("Sum of array elements = %d\n\n", arrSum);

    return 0;
}