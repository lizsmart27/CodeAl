#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    string strA;
    cin >> strA;
    ll n = 1, ans = 1;
    for (int i = 1; i < strA.length(); i++) {
        if (strA[i] == strA[i - 1]) {
            n++;
        } else {
            n = 1;
        }
        ans = max(ans, n);
    }
    cout << ans << endl;
    return 0;
}