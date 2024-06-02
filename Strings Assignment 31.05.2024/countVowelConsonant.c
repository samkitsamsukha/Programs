// Title: Program in C to count the number of vowels and consonants in a string
// Author: Samkit Samsukha
// Date: 01.06.2024

#include <stdio.h>
#include <string.h>

int main(){
    char ch[100];
    printf("Enter a string: ");
    fgets(ch, 100, stdin);
    printf("Entered string: %s", ch);
    int co = 0;
    int v = 0;
    int i = 0;
    while(ch[i] != '\0'){
        char c = ch[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            v++;
        }
        else{
            co++;
        }
        i++;
    }
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", co);
    return 0;
}