// Problem Name:- Structs
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-struct/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

struct Student {
    int age;
    string firstName;
    string lastName;
    int standard;
};

int main() {
    Student st;
    cin>>st.age>>st.firstName>>st.lastName>>st.standard;
    cout<<st.age<<" "<<st.firstName<<" "<<st.lastName<<" "<<st.standard;
}
