#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

int main () {
    int n;

    cin >> n;

    Student a[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student mn;
    Student mx;

    mn.marks = INT_MAX;
    mx.marks = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(a[i].marks < mn.marks) {
            mn = a[i];
        }
        if(a[i].marks > mx.marks) {
            mx = a[i];
        }
    }

    cout << "Top: " << mx.name << " " << mx.roll << " " << mx.marks << endl;
    cout << "Last: " << mn.name << " " << mn.roll << " " << mn.marks << endl;


    return 0;
}