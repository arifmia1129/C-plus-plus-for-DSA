#include<bits/stdc++.h>
using namespace std;

int main () {
    string getting = "Assslamualaikum";

    int lng = getting.size();

    cout << "The size of above getting: " << " " << lng << endl;
    
    int mx_lng = getting.max_size();

    cout << "The max size of above getting: " << " " << mx_lng << endl;

    int cps = getting.capacity();

    cout << "The capacity of above getting: " << " " << cps << endl;

    getting.clear();

    if(getting.empty()) {
        cout << "It's empty" << endl;
    }else {
        cout << "It's not empty" << endl;
    }

    getting.resize(100, 'x');

    cout << "The above getting: " << " " << getting << endl;

    return 0;
}