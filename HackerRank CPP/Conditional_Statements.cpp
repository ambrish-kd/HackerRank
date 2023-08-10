// Problem Name:- Conditional Statements
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main(){
  int in;
  string num[11] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","\0"};
  cin >> in;
  if(in > 9)
    cout << num[0];
  else
    cout << num[in];
  return 0;
}
