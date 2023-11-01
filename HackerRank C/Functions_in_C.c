// Problem Name:- Functions in C
// Problem Link:- https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    if(a>b && a>c && a>d) {
        return a;
    } else if(b>a && b>c && b>d) {
        return b;
    } else if(c>a && c>b && c>d) {
        return c;
    } else {
        return d;
    }
}

int main(){
    int num1, num2, num3, num4;
    scanf("%d\n%d\n%d\n%d", &num1, &num2, &num3, &num4);
    int max = max_of_four(num1, num2, num3, num4);
    printf("%d",max);
    return 0;
}
