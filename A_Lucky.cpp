#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        string s;

        cin >> s;

        int first_sum = 0;
        int last_sum = 0;

        for(int i = 0, j = s.size() - 1; i < j; i++, j--) {
            first_sum += int(s[i] - 48);
            last_sum += int(s[j] - 48);
        }

        if(first_sum == last_sum) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}