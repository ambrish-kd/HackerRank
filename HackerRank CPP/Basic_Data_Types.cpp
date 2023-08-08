// Problem Name:- Basic Data Types
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<fixed<<setprecision(6)<<d<<endl;
    cout<<fixed<<setprecision(14)<<e<<endl; 
    return 0;
}
