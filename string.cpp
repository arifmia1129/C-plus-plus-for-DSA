// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    char s[10001];
    string name;

    cin >> n;

    cin.ignore();

    // cin >> s;
    cin.getline(s, 10001);

    cin >> name;

    cout << n << endl << s << endl << name;

}