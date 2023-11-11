// Problem Name:- Classes and Objects
// Problem Link:- https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int scores[5];
    int sum;

public:
    Student() {
        sum = 0;
    }
    int calculateTotalScore() {
      return sum;
    }
    void input() {
        for(int i=0; i<5; i++) {
            cin>>scores[i];
            sum += scores[i];
        }
    }
};
