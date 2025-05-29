#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;

        cin >> n;

        int a[n + 1];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int smallest = INT_MAX;

        for(int i = 1; i <= n; i++) {
            for(int j = i + 1; j <= n; j++) {
                int sum = a[i - 1] + a[j - 1] + j - i;
               smallest = min(smallest, sum);
            }   
        }

        cout << smallest << endl;
    }

    return 0;
}