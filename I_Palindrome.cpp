#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;

    cin >> s;

    int is_palindrome = 1;

    for(int i = 0, j = s.size() - 1; i < j; i++, j--) {
        if(s[i] != s[j]) {
            is_palindrome = 0; 
            break;
        }
    }

    if(is_palindrome) {
        cout << "YES";
    }else {
        cout << "NO";
    }

    return 0;
}