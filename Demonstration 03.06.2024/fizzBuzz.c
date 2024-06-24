// Title: Program in C to check FizzBuzz.
// Author: Samkit Samsukha
// Date: 03.06.2024

#include <stdio.h>

void fizzbuzz(int n){
    if(n%5 == 0){
        printf("Fizz");
    }
    if(n%3 == 0){
        printf("Buzz");
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fizzbuzz(n);
    return 0;
}

// FOLLOW UP USING POINTER