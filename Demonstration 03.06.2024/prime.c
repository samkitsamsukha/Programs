// Title: Program in C to find the power of a number using functions and pointers.
// Author: Samkit Samsukha
// Date: 03.06.2024

#include <stdio.h>

int isPrime(int n) {
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isPrime(n)){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}
