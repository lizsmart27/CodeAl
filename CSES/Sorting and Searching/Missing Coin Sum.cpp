#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
using ll = long long;
#define endl "\n"
vector<ll> x;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll n = 0;
    ll ans = 1;

    cin >> n;
    x.resize(n);
    for (ll i = 0; i < n; i++)
        cin >> x[i];
    sort(x.begin(), x.end());
    for (ll i = 0; i < n; i++) {
        if (x[i] > ans)
            break;
        else
            ans += x[i];
    }
    cout << ans << endl;
    return 0;
}