// Title: Insert character in a string at a given position
// Author: Samkit Samsukha
// Date: 24.05.2024

#include<stdio.h>
#include<string.h>

void insertChar(char str[], int pos, char ch){
    int len = strlen(str);
    for(int i = len; i >= pos; i--){
        str[i + 1] = str[i];
    }
    str[pos] = ch;
}

int main(){
    char str[100] = "Hello World";
    int pos = 5;
    char ch = '!';
    insertChar(str, pos, ch);
    printf("Modified String: %s\n", str);
    return 0;
}