#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_idx = 0; int max_idx = 0;

     for(int i = 0; i < n; i++) {
      if(a[i] < a[min_idx]) {
        min_idx = i;
      }

      if(a[i] > a[max_idx]) {
        max_idx = i;
      }
    }

    int tmp = a[min_idx];

    a[min_idx] = a[max_idx];
    a[max_idx] = tmp;

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}