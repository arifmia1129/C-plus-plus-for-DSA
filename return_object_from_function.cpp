#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
        int id;
        int age;
        double height;

    Person (int id, int age, double height) {
        this->id = id;
        this->age = age;
        this->height = height;
    }
};

Person fun() {
    Person person1(1, 17, 5.6);

    return person1;
}


int main () {

    Person person = fun();


    cout << person.id << " " << person.age << " " << person.height << endl;

    
    return 0;
}