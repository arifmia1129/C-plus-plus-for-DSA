#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;

    cin >> t;

    for(int idx = 0; idx < t; idx++) {
        int n, q;

        cin >> n >> q;

        int a[n + 1];


        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }


        int is_possible = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    int total =  a[i] + a[j] + a[k];
                    if(total == q) {
                        cout << "YES" << endl;
                        is_possible = 1; 
                        break;
                    }
                }

                if(is_possible) {
                    break;
                }
            }
             if(is_possible) {
                    break;
            }
        }

        if(!is_possible) {
            cout << "NO" << endl;
        }
    }
    return 0;
}