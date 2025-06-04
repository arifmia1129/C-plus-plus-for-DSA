#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string student_name;
    int roll;
    int marks;
};

int main () {
    int n;

    cin >> n;

    Student ar[n + 1];

    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, ar[i].student_name);
        cin >> ar[i].roll >> ar[i].marks;
    }

    for(int i = 0; i < n; i++) {
        cout << ar[i].student_name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }

    return 0;
}