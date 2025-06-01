#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;

    while(getline(cin, s)) {
        int fre_ar[26] =  {0};

        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] != ' ') {
                fre_ar[s[i] - 'a']++;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(fre_ar[i] > 0) {
                for(int l = 0; l < fre_ar[i]; l++) {
                    cout << (char) ( i + 'a');
                }
            }
        }
        cout << endl;
    }
    return 0;
}