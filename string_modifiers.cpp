#include<bits/stdc++.h>
using namespace std;

int main () {
    string s1 = "Hello ";
    string s2 = "World";

    // s1 += s2;
    s1.append(s2);

    s1.push_back('A');

    s1 += "Okay";

    s1[0] = 'G';

    s1.pop_back();

    cout << s1;

    return 0;
}