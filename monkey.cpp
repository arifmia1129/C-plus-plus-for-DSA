#include<bits/stdc++.h>
using namespace std;

int main () {
    char c[100001];
    
    
    while(cin.getline(c, 100001) ) {
        int fre_ar[26] = {0};

        if(!strlen(c)) {
            continue;
        }

        for(int i = 0; c[i] != '\0'; i++) {
            if(c[i] != ' ') {
                fre_ar[c[i] - 'a']++;
            }
        }                                                                                                                                                                                                                                                                                                                       
 
        for(int i = 0; i < 26; i++) {
           if(fre_ar[i] > 0 && (char)fre_ar[i] != ' ') {
                if(fre_ar[i] > 1) {
                    for(int l = 0; l < fre_ar[i]; l++) {
                        cout << (char)(i + 97);
                    }
                }else{
                    cout << (char)(i + 97);
                }
           }
        }
        
        cout << endl;
    }

    return 0;
}