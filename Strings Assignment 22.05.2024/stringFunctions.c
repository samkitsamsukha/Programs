// Title: Simulation of built-in string functions.
// Author: Samkit Samsukha
// Date: 24.05.2024

#include<stdio.h>
#include<string.h>

int lengthOfString(char str[]){
    int l=0;
    while(str[l] != '\0'){
        l++;
    }
    return l;
}

void concatString(char str1[], char str2[]){
    int len1 = lengthOfString(str1);
    int len2 = lengthOfString(str2);
    for(int i = 0; i < len2; i++){
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0';
}

void copyString(char str1[], char str2[]){
    int len = lengthOfString(str2);
    for(int i = 0; i < len; i++){
        str1[i] = str2[i];
    }
    str1[len] = '\0';
}

int compareString(char str1[], char str2[]){
    int len1 = lengthOfString(str1);
    int len2 = lengthOfString(str2);
    if(len1 != len2){
        return len1 - len2;
    }
    for(int i = 0; i < len1; i++){
        if(str1[i] != str2[i]){
            return str1[i] - str2[i];
        }
    }
    return 0;
}

void upperToLower(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
}

int main(){
    char name[] = "Samkit Samsukha";
    printf("String: %s\n", name);
    printf("Length of String: %d\n", lengthOfString(name));
    char college[] = " studies in RV College of Engineering";
    concatString(name, college);
    printf("Concatenated String: %s\n", name);

    char copyStr[100];
    copyString(copyStr, name);
    printf("Copied String: %s\n", copyStr);

    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = compareString(str1, str2);
    if(result == 0){
        printf("Strings are equal\n");
    } else if(result > 0){
        printf("String 1 is greater than String 2\n");
    } else {
        printf("String 1 is less than String 2\n");
    }

    char upperStr[] = "HELLO WORLD";
    upperToLower(upperStr);
    printf("Lowercase String: %s\n", upperStr);

    return 0;
}