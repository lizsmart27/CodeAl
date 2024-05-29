#include <iostream>
#include <vector>
#include <array>
#include <cmath>
using namespace std;
using ll = long long;
#define endl "\n"
long long pow10(int x) {
    long long result = 1;
    for (int i = 1; i <= x; i++) {
        result *= 10;
    }
    return result;
}
char findPostion(ll i) {
    ll tempLength = 0, tempB = 9, tempD = 1;
    while (i > tempLength + tempB * tempD) {
        tempLength += tempB * tempD;
        tempB *= 10;
        tempD++;
    }
    i = i - tempLength;
    // ll num = pow(10, tempD - 1) + (i - 1) / tempD;
    ll num = pow10(tempD - 1) + (i - 1) / tempD;
    string numstr = to_string(num);
    return numstr[(i - 1) % tempD];
}
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int q;
    cin >> q;
    while (q--) {
        ll k;
        cin >> k;
        cout << findPostion(k) << endl;
    }
    return 0;
}