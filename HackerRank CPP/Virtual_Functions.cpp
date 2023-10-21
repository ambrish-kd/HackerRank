// Problem Name:- Virtual Functions
// Problem Link:- https://www.hackerrank.com/challenges/virtual-functions/problem?isFullScreen=true

class Person {
    public:
    string name;
    int age;
    
    virtual void getdata() {
        cin>>this->name>>this->age;
    }
    virtual void putdata() {
        cout<<this->name<<" "<<this->age<<endl;
    }
};

class Professor : public Person {
    public:
    int publications;
    static int id;
    int cur_id;
    
    Professor() {
        this->cur_id = ++id;
    }
    void getdata() {
        cin>>this->name>>this->age>>this->publications;
    }
    void putdata() {
        cout<<this->name<<" "<<this->age<<" "<<this->publications<<" "<<this->cur_id<<endl;
    }
};
int Professor::id = 0;

#define NUM_OF_MARKS 6
class Student : public Person {
    public:
    int marks[NUM_OF_MARKS];
    static int id;
    int cur_id;
    
    Student() {
        this->cur_id = ++id;
    }
    void getdata() {
        cin>>this->name>>this->age;
        for(int i=0; i<NUM_OF_MARKS; i++){
            cin>>marks[i];
        }
    }
    void putdata() {
        int marksSum = 0;
        for(int i=0; i<NUM_OF_MARKS; i++){
            marksSum += marks[i];
        }
        cout<<this->name<<" "<<this->age<<" "<<marksSum<<" "<<this->cur_id<<endl;
    }
};
int Student::id = 0;
