// Title: Program in C to check input character is a vowel or not.
// Author: Samkit Samsukha
// Date: 31.05.2024

#include <stdio.h>
#include <conio.h>

int main(){
    char c;
    printf("Enter a character: \n");
    c = getch();
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("%c is a vowel", c);
    }
    else{
        printf("%c is a consonant", c);
    }
    return 0;
}