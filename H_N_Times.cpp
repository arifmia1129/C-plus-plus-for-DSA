#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        int n;
        char c;

        cin >> n >> c;

        for(int i = 0; i < n; i++) {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}