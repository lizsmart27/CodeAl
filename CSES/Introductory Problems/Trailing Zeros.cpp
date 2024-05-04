#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll n;
    cin >> n;
    int ans = 0;
    while (n != 0) {
        n = n / 5;
        ans = ans + n;
    }
    cout << ans << endl;
    return 0;
}