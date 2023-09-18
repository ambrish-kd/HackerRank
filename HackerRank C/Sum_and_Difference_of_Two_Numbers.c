// Problem Name:- Sum and Difference of Two Numbers
// Problem Link:- https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include <stdio.h>

int main() {
    int num1, num2;
    float num3, num4;
    scanf("%d %d\n%f %f", &num1, &num2, &num3, &num4);
    printf("%d %d\n%0.1f %0.1f", num1+num2, num1-num2, num3+num4, num3-num4);
}
