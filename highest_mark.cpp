#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int id;
        string std_name;
        char section;
        int marks;
};

int main () {
    int t;

    cin >> t;


    for(int i = 0; i < t; i++) {

        Student hero;
        
        for(int j = 0; j < 3; j++) {
            Student tem_hero;

            cin >> tem_hero.id >> tem_hero.std_name >> tem_hero.section >> tem_hero.marks;

            if(j == 0) {
                hero = tem_hero;
            }else {
                if(hero.marks < tem_hero.marks) {
                    hero = tem_hero;
                }else if(hero.marks == tem_hero.marks) {
                    if(tem_hero.id < hero.id) {
                        hero = tem_hero;
                    }
                }
            }
        
        }

        cout << hero.id << " " << hero.std_name << " " << hero.section << " " << hero.marks << endl;
    }
    

    return 0;
}