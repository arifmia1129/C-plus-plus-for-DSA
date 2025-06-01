#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        int n;

        cin >> n;

        int a[n + 1];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            if(a[i] == 1 && i != n - 1) {
                a[i]++;
            }
        }

        for(int i = 0; i < n; i++) {
            int opn = 0;
            while(a[i + 1] % a[i] == 0 && opn < (2 * n)) {
                a[i + 1]++;
                opn++;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;

    }

    return 0;
}