#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int id;
        char section;
        double gpa;
    
    Student (int id, char section, double gpa) {
        this->id = id;
        this->section = section;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student* student = new Student(101, 'A', 5.00);

    return student;
}

int main () {
    Student* stu_res = fun();

    cout << stu_res->id << " " << stu_res->section << " " << stu_res->gpa << endl;
    
    return 0;
}