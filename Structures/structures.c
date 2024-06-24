#include <stdio.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main(){
    struct myStructure s1 = {13, 'B', "Some Text"};
    struct myStructure s2 = s1; // copying one structure to another is allowed
    printf("%d, %c, %s", s2.myNum, s2.myLetter, s2.myString);
    return 0;
}