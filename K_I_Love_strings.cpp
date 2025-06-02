#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        string s, t;

        cin >> s >> t;

        int s_lng = s.size();
        int t_lng = t.size();

        int mx_lng =s_lng > t_lng ? s_lng : t_lng;



        for(int i = 0; i < mx_lng; i++) {
           if(i < s_lng) {
            cout << s[i];
           }

           if(i < t_lng) {
            cout << t[i];
           }

        }

        cout << endl;

    }

    return 0;
}