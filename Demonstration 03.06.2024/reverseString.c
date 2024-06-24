// Title: Program in C to reverse a string without using strrev().
// Author: Samkit Samsukha
// Date: 03.06.2024

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int ascii[100];
    convert(ascii, str);
    return 0;
}

// FOLLOW UP USING POINTER