#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float x = 20.12345;

    cout << fixed << setprecision(2) << x << endl;

    return 0;
}