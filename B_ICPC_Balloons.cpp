#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        int n;
        string s;

        cin >> n >> s;

        int fre_ar[27] = {0};

        for(int i = 0; i < n; i++) {
            if(fre_ar[s[i] - 65]) {
                fre_ar[s[i] - 65]++;
            }else {
                 fre_ar[s[i] - 65] =  fre_ar[s[i] - 65] + 2;
            }
        }

        int sum = 0;

        for(int i = 0; i < 27; i++) {
            if(fre_ar[i]) {
                sum += fre_ar[i];
            }
        }
        

        cout << sum << endl;
    }

    return 0;
}