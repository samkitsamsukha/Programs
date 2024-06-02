// Title: Program in C to count the number of times 'the' appears in a string.
// Author: Samkit Samsukha
// Date: 01.06.2024

#include <stdio.h>
#include <string.h>

int main(){
    char ch[150];
    printf("Enter a string: ");
    fgets(ch, 150, stdin);
    printf("Entered string: %s", ch);
    int c = 0;
    int i = 0;
    while(ch[i] != '\0'){
        if(ch[i] == 't'|| ch[i]  == 'T'){
            if(ch[i+1] == 'h'){
                if(ch[i+2] == 'e'){
                    c++;
                    i+=2;
                }
            }
        }
        else{
            i++;
        }
    }
    printf("Number of times the occurs: %d", c);
    return 0;
}