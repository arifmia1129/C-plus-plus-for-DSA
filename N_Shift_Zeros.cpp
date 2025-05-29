#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j] && a[i] == 0) {
                int tmp = a[j];
                a[j] = a[i];
                a[i] =tmp;
            }
        }
    }

     for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }


    return 0;
}