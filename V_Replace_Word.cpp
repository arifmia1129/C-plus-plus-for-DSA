// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     string s;

//     cin >> s;

//     string egypt_str = "EGYPT";

//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == 'E') {
//             int is_okay = 1;
//             for(int j = 0; j < egypt_str.size(); j++) {
//                 if(egypt_str[j] != s[i + j]) {
//                     is_okay = 0;
//                     break;
//                 }
//             }
//             if(is_okay) {
//                  s.replace(i, 5, " ");
//             }
//         }
//     }
//     cout << s;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;

    getline(cin, s);

    while(s.find("EGYPT") != -1) {
        int idx = s.find("EGYPT");
        s.replace(idx, 5, " ");
    }

    cout << s;

    return 0;
}