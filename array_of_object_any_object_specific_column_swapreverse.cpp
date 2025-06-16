#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int id;
        char section;
        int marks;
};

int main () {
    int n;

    cin >> n;
    Student ar[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> ar[i].name >> ar[i].id >> ar[i].section >> ar[i].marks;
    }

    for(int i = 0, j = n - 1; i < j; i++, j--) {
        swap(ar[i].section,ar[j].section);
        
    }

     for(int i = 0; i < n; i++) {
        cout <<  ar[i].name << " " << ar[i].id << " " << ar[i].section << " " << ar[i].marks << endl;
    }

    
    return 0;
}