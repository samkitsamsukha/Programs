// Title: Program in C to find max and min element in the array using functions
// Author: Samkit Samsukha
// Date: 03.06.2024

#include <stdio.h>
#include <limits.h>

int main(){
    int arr[] = {1, 5, 2, 7, 3, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i = 0; i<len; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    printf("The maximum element in the array is %d and minimum element is %d.", maxi, mini);
    return 0;
}

// FOLLOW UP USING POINTER