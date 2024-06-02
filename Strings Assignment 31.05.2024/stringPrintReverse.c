// Title: Program in C to print individual characters of a string in reverse order.
// Author: Samkit Samsukha
// Date: 31.05.2024

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // Remove the newline character
    length = strlen(str);
    printf("Reverse string: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}