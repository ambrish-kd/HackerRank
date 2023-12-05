// Problem Name:- 1D Arrays in C
// Problem Link:- https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);
    int *arr = malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d", sum);
    free(arr);
}
