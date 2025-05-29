#include<bits/stdc++.h>
using namespace std;

class Student {
    public: 
        int id;
        int cls;
        double gpa;

    Student (int id, int cls, double gpa) {
        this->id = id;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main () {

    Student student1(101, 1, 5.00);

    cout << student1.id << " " << student1.cls << " " << student1.gpa << endl;
    
    return 0;
}