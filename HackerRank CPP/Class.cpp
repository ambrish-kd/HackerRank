// Problem Name:- Class
// Problem Link:- https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int age;
    int standard;
    string firstName;
    string lastName;  

public:
    void setAge(int a) {
        age = a;
    }
    void setStandard(int std) {
        standard = std;
    }
    void setFirstName(string fn) {
        firstName = fn;
    } 
    void setLastName(string ln) {
        lastName = ln;
    }
    int getAge() {
        return age;
    }
    int getStandard() {
        return standard;
    }
    string getFirstName() {
        return firstName;
    }
    string getLastName() {
        return lastName;
    }
    string toString() { 
        stringstream ss;
        char c = ',';
        ss<<age<<c<<firstName<<c<<lastName<<c<<standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    cin>>age>>first_name>>last_name>>standard;

    Student st;
    st.setAge(age);
    st.setStandard(standard);
    st.setFirstName(first_name);
    st.setLastName(last_name);
    
    cout<<st.getAge()<<"\n";
    cout<<st.getLastName()<<", "<<st.getFirstName()<<"\n";
    cout<<st.getStandard()<<"\n";
    cout<<"\n";
    cout<<st.toString();
}
