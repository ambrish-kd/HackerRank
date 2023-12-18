// Problem Name:- Digit Frequency
// Problem Link:- https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char map[10];
    gets(str);
    for(int i=0; i<10; i++) {
        map[i] =0;
    }
    for(int i=0; i<strlen(str); i++) {
        int x = str[i]-48;
        if(x>=0 && x<=9){
            map[x]++;
        }
    }
    for(int i=0; i<10; i++) {
        printf("%d ", map[i]);
    }
}
