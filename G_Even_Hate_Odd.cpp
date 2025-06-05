#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        int n;

        cin >> n;

        int is_even = n % 2;

         int avg = n / 2;
            int a[n + 1];

            int even_cnt = 0;
            int odd_cnt = 0;

            for(int i = 0; i < n; i++){
                cin >> a[i];

                if(is_even == 0) {
                    if(a[i] % 2 == 0) {
                    even_cnt++;
                    }else {
                        odd_cnt++;
                    }
                }
            }


            if(even_cnt || odd_cnt) {
                cout << abs(avg - even_cnt) << endl;
            }else{
                cout << "-1" << endl;
            }
    }

    return 0;
}