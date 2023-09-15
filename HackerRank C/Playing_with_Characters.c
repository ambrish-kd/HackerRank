// Problem Name:- Playing with Characters
// Problem Link:- https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include <stdio.h>

int main() {
    char ch, s[10], sen[100];
    scanf("%c\n%s\n%[^\n]%*c", &ch, s, sen);
    printf("%c\n%s\n%s\n", ch, s, sen);
}
