#include<bits/stdc++.h>
using namespace std;



int main () {
    string s, w;

    getline(cin, s);

    cin >> w;

    stringstream ss(s);

    string word;

    int cnt = 0;

    while(ss >> word) {
        if(word == w) {
            cnt++;
        }
    }

    cout << cnt;
   
    return 0;
}