#include <iostream>
#include <vector>
#include <array>
#include <cmath>

using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll n;
    cin >> n;
    ll ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * 2;
        if (ans >= (int)pow(10, 9) + 7) {
            ans = ans % ((int)pow(10, 9) + 7);
            /* code */
        }
    }
    cout << ans << endl;
    return 0;
}