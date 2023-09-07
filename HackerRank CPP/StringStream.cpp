// Problem Name:- StringStream
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string temp="";
    for(int i=0; i<=s.size(); i++){
        if(s[i] == ',' || i==s.size()){
            cout<<temp<<endl;
            temp = "";
        }else{
            temp.push_back(s[i]);
        }
    } 
    return 0;
}
