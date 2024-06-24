// Title: Program in C to convert the given string into an array of numbers where each number is ASCII value of character using functions.
// Author: Samkit Samsukha
// Date: 03.06.2024

#include <stdio.h>
#include <string.h>

void convert(int ascii[], char *str){
    for(int i=0; i<strlen(str); i++){
        ascii[i] = str[i];
        printf("%c --> %d\n", str[i], ascii[i]);
    }
}

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int ascii[100];
    convert(ascii, str);
    return 0;
}

// FOLLOW UP USING POINTER