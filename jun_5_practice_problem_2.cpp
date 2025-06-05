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
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        Student tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
     }


    for(int i = 0; i < n; i++) {
        cout << " " << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}