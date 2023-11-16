// Problem Name:- Pointer
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b) {
    (*a) = (*a) + (*b);
    (*b) = abs((*a) - 2*(*b));   
}

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;
}
