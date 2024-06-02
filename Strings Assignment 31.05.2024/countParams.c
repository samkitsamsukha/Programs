// Title: Program in C to count the number of alphabets, digits and special characters in a string
// Author: Samkit Samsukha
// Date: 01.06.2024

#include <stdio.h>
#include <string.h>

int main(){
    char ch[100];
    printf("Enter a string: ");
    fgets(ch, 100, stdin);
    printf("Entered string: %s", ch);
    int alpha = 0;
    int dig = 0;
    int sp = 0;
    int i = 0;
    while(ch[i] != '\0'){
        char c = ch[i];
        if((c>=65 && c<=91) || (c>=97 && c<=122)){
            alpha++;
        }
        else if(c>=48 && c<=57){
            dig++;
        }
        else{
            sp++;
        }
        i++;
    }
    printf("Number of alphabets: %d\n", alpha);
    printf("Number of diigts: %d\n", dig);
    printf("Number of special characters: %d\n", --sp);
    return 0;
}