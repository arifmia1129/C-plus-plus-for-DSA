#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
        char name[100];
        int age;
        char gender;

    // Person (char n[], int a, char g) {
    //     strcpy(name, n);
    //     age = a;
    //     gender = g;
    // }
};

int main () {
    char name[100];
    int age;
    char gender;

    Person person1;

    cin >> person1.name >> person1.age >> person1.gender;


    // char name1[100] = "Arif";
    // char name2[100] = "Binu";


    // Person person1(name, age, gender);
    // Person person2(name2, 19, 'F');


    cout << person1.name << " " << person1.age << " " << person1.gender << endl;
    // cout << person2.name << " " << person2.age << " " << person2.gender << endl;
    
    return 0;
}