#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;

    cin >> n;

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    char order;

    cin >> order;

    if(order == 'A') {
        sort(a, a + n);

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }else if(order == 'D') {
         sort(a, a + n, greater<int>());

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }else {
        cout << "Wrong order type";
    }

    return 0;
}