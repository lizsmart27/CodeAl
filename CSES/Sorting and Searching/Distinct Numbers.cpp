#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
using ll = long long;
#define endl "\n"
ll n;
vector<ll> lens;
ll ans = 1;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    cin >> n;
    lens.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> lens[i];
    }
    sort(lens.begin(), lens.end());
    for (int i = 1; i < n; i++) {
        if (lens[i] != lens[i - 1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}