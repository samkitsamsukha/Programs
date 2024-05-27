// myhead.h

#ifndef MYHEAD_H
#define MYHEAD_H

// function prototypes
int square(int a){
    return a*a;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int isPrime(int n){
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int maxElement(int arr[], int size){
    int maxi = arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int stringLength(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

void stringConcat(char str1[], char str2[], char result[]){
    int i, j;
    for(i = 0; str1[i] != '\0'; i++){
        result[i] = str1[i];
    }
    for(j = 0; str2[j] != '\0'; j++){
        result[i+j] = str2[j];
    }
    result[i+j] = '\0';
}

int arraySum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

#endif // MYHEAD_H