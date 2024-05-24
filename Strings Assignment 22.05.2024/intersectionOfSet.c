// Title: To find intersection of two sets
// Author: Samkit Samsukha
// Date: 24.05.2024

#include<stdio.h>

int main(){
    int arr[] = {3, 4, 5, 3, 4, 5};
    int nums[] = {8, 9, 6, 0, 3, 4, 5, 3, 4};
    int l1 = sizeof(arr)/sizeof(arr[0]);
    int l2 = sizeof(nums)/sizeof(nums[0]);
    int ans[l1+l2];
    int k = 0;
    for(int i = 0; i<l1; i++){
        int found = 0;
        for(int j = 0; j<k; j++){
            if(arr[i] == ans[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            for(int j = 0; j<l2; j++){
                if(arr[i] == nums[j]){
                    ans[k] = arr[i];
                    k++;
                    break;
                }
            }
        }
    }
    printf("Intersection Set: [");
    for(int i = 0; i<k; i++){
        printf("%d ", ans[i]);
    }
    printf("]");
    return 0;
}