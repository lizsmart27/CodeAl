#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"
vector<long long> yVal, xVal;
void clac(ll &y, ll &x) {
    if (x >= y) {
        if (x % 2 == 0)
            cout << (x - 1) * (x - 1) + y << endl;
        else
            cout << x * x - (y - 1) << endl;
    } else {
        if (y % 2 == 0)
            cout << y * y - (x - 1) << endl;
        else
            cout << (y - 1) * (y - 1) + x << endl;
    }
}
int main() {
    ll t;
    cin >> t;
    yVal.resize(t);
    xVal.resize(t);
    for (int i = 0; i < t; i++) {
        cin >> yVal[i] >> xVal[i];
    }
    for (int i = 0; i < t; i++) {
        clac(yVal[i], xVal[i]);
    }
    return 0;
}
