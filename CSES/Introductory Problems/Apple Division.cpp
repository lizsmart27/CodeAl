#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"
ll n;
vector<ll> weights;
ll solve(ll idx, ll sum1, ll sum2) {
    if (idx == n) {
        return abs(sum1 - sum2);
    }
    int nidx = idx + 1;
    ll leftchoose = solve(idx + 1, sum1 + weights[idx], sum2);
    ll rightchoose = solve(idx + 1, sum1, sum2 + weights[idx]);
    return min(leftchoose, rightchoose);
}
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    cin >> n;
    weights.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    ll ans;
    ans = solve(0, 0, 0);
    cout << ans << endl;
    return 0;
}