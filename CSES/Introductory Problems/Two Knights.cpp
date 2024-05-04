#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;

int main() {
    ll k;
    cin >> k;
    cout << 0 << endl;
    for (ll i = 2; i <= k; i++) {
        // 用总数减去冲突的，而且冲突的情况分为横跳 和 竖跳 两种情况
        cout << (i * i * (i * i - 1)) / 2 - 4 * (i - 1) * (i - 2) << endl;
    }
    return 0;
}