// Problem Name:- Array Reversal
// Problem Link:- https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int *arr = (int*) malloc(num*sizeof(int));
    for(int i=0; i<num; i++) {
        scanf("%d", arr+i);
    }

    for(int i=0; i<num/2 ; i++) {
        int temp = arr[i];
        arr[i] = arr[num-1-i];
        arr[num-1-i] = temp;
    }

    for(int i=0; i<num; i++) {
        printf("%d ", *(arr+i));
    }
}
