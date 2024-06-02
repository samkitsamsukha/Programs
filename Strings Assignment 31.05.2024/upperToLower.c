// Title: Program in C to input character in uppercase and convert into lowercase.
// Author: Samkit Samsukha
// Date: 31.05.2024

#include <conio.h>
#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: \n");
    c = getch();
    printf("Entered character: %c\n", c);
    c = c + 32;
    printf("Converted to Lowercase: %c\n", c);
    return 0;
}