// Title: Program in C to count the number of words in a string
// Author: Samkit Samsukha
// Date: 01.06.2024

#include <stdio.h>
#include <string.h>

int main(){
    char ch[100];
    printf("Enter a string: ");
    fgets(ch, 100, stdin);
    printf("Entered string: %s", ch);
    int c = 1;
    int i = 0;
    while(ch[i] != '\0'){
        if(ch[i] == ' '){
            c++;
        }
        i++;
    }
    printf("Number of words: %d\n", c);
    return 0;
}