/*Title: to demonstrate the use of the &(address of) and *(value at address) operators.*/
// Author: Samkit Samsukha
// Date: 20.05.2024

#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    printf("%p\n", p); // prints memory address
    printf("%p\n", &a); // prints memory address
    printf("%d\n", a); // prints value
    printf("%d\n", *p); // prints value
    return 0;
}