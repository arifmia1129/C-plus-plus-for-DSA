#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

bool cmp (Student one, Student another) {
    return one.marks == another.marks ? one.roll < another.roll : one.marks > another.marks;
}

int main () {
    int n;

    cin >> n;

    Student a[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << " " << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}