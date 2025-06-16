#include<bits/stdc++.h>
using namespace std;

int main () {
    string sen;

    getline(cin, sen);

    int is_found = 0;
    
    stringstream ss(sen);

    string wrd;

 
    while(ss >> wrd) {
        if(wrd == "Jessica") {
            is_found = 1;
        }
    }

    if(is_found) {
        cout << "YES";
    }else {
        cout << "NO";
    }

    return 0;
}