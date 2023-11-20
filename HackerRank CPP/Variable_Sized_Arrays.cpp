// Problem Name:- Variable Sized Arrays
// Problem Link:- https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin>>n>>q;
    vector<vector<int>> arrays;
    while(n--) {
        int k;
        cin>>k;
        vector<int> arr;
        while(k--) {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        arrays.push_back(arr);
    }
    while(q--) {
        int arrNum, idx;
        cin>>arrNum>>idx;
        cout<<arrays[arrNum][idx]<<endl;
    }
}
