// Problem Name:- Strings
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    
    cout<<a.size()<<' '<<b.size()<<endl;
    
    cout<<a+b<<endl;
    
    cout <<b.front() + a.substr(1, a.size()-1) << " "<< a.front() + b.substr(1, b.size()-1);
    
    return 0;
}
