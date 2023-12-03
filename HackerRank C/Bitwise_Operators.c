// Problem Name:- Bitwise Operators
// Problem Link:- https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true

#include <stdio.h>

int andMax, orMax, xorMax, tempAND, tempOR, tempXOR;

void calculate_the_maximum(int n, int k) {
    for(int i=1; i<n; i++) {
        for(int j=i+1; j<=n; j++) {
            tempAND = i&j;
            if(tempAND<k && andMax<tempAND) {
                andMax = tempAND;
            }
            tempOR = i|j;
            if(tempOR<k && orMax<tempOR) {
                orMax = tempOR;
            }
            tempXOR = i^j;
            if(tempXOR<k && xorMax<tempXOR) {
                xorMax = tempXOR;
            }
        }
    }
    printf("%d\n%d\n%d", andMax, orMax, xorMax);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
}
