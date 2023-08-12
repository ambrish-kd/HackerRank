// Problem Name:- For Loop
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

string solve(int n){
    unordered_map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";
    mp[4] = "four";
    mp[5] = "five";
    mp[6] = "six";
    mp[7] = "seven";
    mp[8] = "eight";
    mp[9] = "nine";
    if(n <= 9)
        return mp[n];
    else
        return (n%2 == 1) ? "odd" : "even";
}

int main(){
    int left, right;
    cin>>left>>right;
    for(int i=left; i<right+1; i++){
        string st;
        st = solve(i);
        cout<<st<<endl;
    }
    return 0;
}
