#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int id;
        char section;
        int math_marks;
        int bng_marks;
};

bool cmp (Student a, Student b) {
    int a_total_marks = a.bng_marks + a.math_marks;
    int b_total_marks = b.bng_marks + b.math_marks;

    if(a_total_marks == b_total_marks) {
        return a.id < b.id;
    }else {
        return a_total_marks > b_total_marks;
    }
}

int main () {
    int n;

    cin >> n;
    Student ar[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> ar[i].name >> ar[i].id >> ar[i].section >> ar[i].math_marks >> ar[i].bng_marks;
    }

   sort(ar, ar + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << " " << ar[i].name << " " << ar[i].id << " " << ar[i].section << " " << ar[i].math_marks << " " << ar[i].bng_marks << endl;
    }

    
    return 0;
}