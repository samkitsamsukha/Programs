// Title: Program in C to find whether the substring is present in the string
// Author: Samkit Samsukha
// Date: 01.06.2024

#include <stdio.h>
#include <string.h>

int main(){
    char ch[100];
    printf("Enter a string: ");
    fgets(ch, 100, stdin);
    char check[100];
    printf("Enter a substring: ");
    fgets(check, 100, stdin);
    printf("Entered string: %s", ch);
    char *res = strstr(ch, check);
    if(res){
        printf("Found!");
    }
    else{
        printf("Not found!");
    }
    return 0;
}