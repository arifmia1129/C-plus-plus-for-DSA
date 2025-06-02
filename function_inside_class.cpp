#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int math_marks;
        int english_marks;
    
    Student(string name, int roll, int math_marks, int english_marks) {
        this->name = name;
        this->roll = roll;
        this->math_marks = math_marks;
        this->english_marks = english_marks;
    }

    void total_marks() {
        cout << "Total marks of " << name << " is " << math_marks + english_marks << endl;
    }
};

int main () {
    Student student1("Arif", 01, 30, 40);

    cout << student1.name  << endl;

    student1.total_marks();
    
    return 0;
}