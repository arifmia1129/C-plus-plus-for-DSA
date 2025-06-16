#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp (Student a, Student b) {
    
    if(a.eng_marks != b.eng_marks) {
        return a.eng_marks > b.eng_marks;
    }else if(a.math_marks != b.math_marks) {
        return a.math_marks > b.math_marks;
    }else {
        return a.id < b.id;
    }
}

int main () {
    int n;

    cin >> n;
    Student ar[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> ar[i].name >> ar[i].cls >> ar[i].section >> ar[i].id  >> ar[i].math_marks >> ar[i].eng_marks;
    }

   sort(ar, ar + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << ar[i].name << " " << ar[i].cls << " "  << ar[i].section << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    }

    
    return 0;
}