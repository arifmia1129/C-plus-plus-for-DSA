#include<bits/stdc++.h>
using namespace std;

// EGYPT

int main () {
    string s;

    cin >> s;

    int fre_ar[26] = {0};

    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            fre_ar[s[i] - 'a']++;
        }else {
            fre_ar[s[i] - 'A']++;
        }
    }

    string egypt_str = "egypt";
    int min_lng = INT_MAX;


    for(int i = 0; i < egypt_str.size(); i++) {
        for(int j = 0; j < 26; j++) {
            if(fre_ar[j] > 0 && fre_ar[j] < min_lng && egypt_str[i] == char(j + 97)) {
                min_lng = fre_ar[j];
            }
        }
    }

    cout << min_lng << endl;

    return 0;
}