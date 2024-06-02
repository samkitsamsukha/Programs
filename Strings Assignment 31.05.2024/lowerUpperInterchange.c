// Title: Program in C to interchange lowercase and uppercase characters.
// Author: Samkit Samsukha
// Date: 01.06.2024

#include <stdio.h>
#include <string.h>

int main(){
    char ch[100];
    printf("Enter a string: ");
    fgets(ch, 100, stdin);
    printf("Entered string: %s", ch);
    int i = 0;
    while(ch[i] != '\0'){
        if((ch[i]>=65 && ch[i]<=91)){
            ch[i] = ch[i] + 32;
        }
        else{
            ch[i] = ch[i] - 32;
        }
        i++;
    }
    ch[i-1] = '\0';
    printf("Modified string: %s", ch);
    return 0;
}