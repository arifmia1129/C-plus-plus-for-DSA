#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int id;
        double gpa;

    Student(int id, double gpa) {
        this->id = id;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student student(1, 3.99);

    Student* p = &student;

    return p;

}

int main () {
    Student* p = fun();

    cout << p->id << " " << p->gpa << endl;
    
    return 0;
}