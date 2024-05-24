// Title: Print Common Characters of Two Strings in C
// Author: Samkit Samsukha
// Date: 24.05.2024

#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Varenya";
    char str2[] = "Thaker";
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    char common[l1][l2];
    int count = 0;
    printf("The common characters in \"%s\" and \"%s\" are: ", str1, str2);
    for(int i = 0; i<l1; i++){
        for(int j = 0; j<l2; j++){
            if(str1[i] == str2[j]){
                int found = 0;
                for(int k = 0; k < count; k++){
                    if(common[k][0] == str1[i]){
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    common[count][0] = str1[i];
                    count++;
                    printf("\'%c\' ", str1[i]);
                }
                break;
            }
        }
    }
    return 0;
}