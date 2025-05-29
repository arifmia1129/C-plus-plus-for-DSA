#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int roll;
        char section;
        double math_marks;
        int cls;
    
    Student(char name[100], int roll, char section, double math_marks, int cls){
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
    }
};



int main () {
    Student student1("Arif", 1, 'A', 99.5, 5);
    Student student2("Binu", 2, 'A', 98.5, 5);
    Student student3("Ariba", 3, 'A', 100, 5);

    double max = INT_MIN;
    char student_name[100];

    if(student1.math_marks > max) {
        max = student1.math_marks;
       strcpy(student_name, student1.name);
    }
    if(student2.math_marks > max) {
        max = student2.math_marks;
        strcpy(student_name, student2.name);
    }
    if(student3.math_marks > max) {
        max = student3.math_marks;
        strcpy(student_name, student3.name);
    }

    cout << student_name;
    
    return 0;
}