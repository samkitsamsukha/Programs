// Title: Program in C to find the number of consonants and vowels using functions in a string of alphabets.
// Author: Samkit Samsukha
// Date: 03.06.2024

#include <stdio.h>
#include <string.h>

int isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int v = 0;
    int c = 0;
    for(int i = 0; i < strlen(str); i++){
        if(isVowel(str[i])){
            v++;
        }
        else{
            c++;
        }
    }
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);
    return 0;
}