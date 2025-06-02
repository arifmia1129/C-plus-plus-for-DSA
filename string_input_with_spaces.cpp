#include<bits/stdc++.h>
using namespace std;

int main () {
    string name, gender;
    int age;

    getline(cin, name);

    cin >> age;

    // cin.ignore()

    cin >> gender;

    cout << "Name: " << name << ", " << "Age: " << age << ", " << "Gender: " << gender << endl; 
    
    return 0;
}