#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        string s;

        cin >> s;

        if(s.find("010") != -1 || (s.find("101") != -1)) {
            cout << "Good" << endl;
        }else {
            cout << "Bad" << endl;
        }
    }

    return 0;
}