#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        string sen, wrd;

        cin >> sen >> wrd;

        int wrdLng = wrd.size();

        
        while (sen.find(wrd) != -1)
        {
            /* code */
            int startIdx = sen.find(wrd);

            sen.replace(startIdx, wrdLng, "#");
        }
        

        cout << sen << endl;
    }

    return 0;
}