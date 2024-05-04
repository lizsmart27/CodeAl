#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int n;
    cin >> n;
    ll pre = 0, cur = 0;
    ll ans = 0;
    cin >> cur;
    for (int i = 1; i < n; i++) {
        pre = cur;
        cin >> cur;
        if (cur < pre) {
            ans = ans + (pre - cur);

        } else {
            ans = ans + 0;
        }
        cur = max(pre, cur);
    }
    cout << ans << endl;
    return 0;
}