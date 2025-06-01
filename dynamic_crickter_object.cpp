#include<bits/stdc++.h>
using namespace std;

class Cricketer {
    public:
        int jersey_no;
        char country[20];
};

int main () {
    Cricketer* dhoni = new Cricketer;
    Cricketer* kohli = new Cricketer;

    dhoni->jersey_no = 1;
    strcpy(dhoni->country, "India");

    // kohli = dhoni;

    kohli->jersey_no = dhoni ->jersey_no;
    strcpy(kohli->country, dhoni->country);


    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country << endl;
    
    
    return 0;
}