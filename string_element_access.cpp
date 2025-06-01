#include<bits/stdc++.h>
using namespace std;

int main () {
    string my_str = "Hello World";

    cout << "First element: " << my_str[0] << endl;
    cout << "First element: " << my_str.at(0) << endl;
    cout << "First element: " << my_str.front() << endl;
    cout << "Last element: " << my_str.back() << endl;
    cout << "Last element: " << my_str[my_str.size() - 1] << endl;

    return 0;
}