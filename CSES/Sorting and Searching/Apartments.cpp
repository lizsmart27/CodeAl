#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
using ll = long long;
#define endl "\n"
ll n, m, k;
vector<ll> applicants;
vector<ll> apartments;
ll ans = 0;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    cin >> n >> m >> k;
    applicants.resize(n);
    apartments.resize(m);
    for (ll i = 0; i < n; i++) {
        cin >> applicants[i];
    }
    sort(applicants.begin(), applicants.end());
    for (ll i = 0; i < m; i++) {
        cin >> apartments[i];
    }
    sort(apartments.begin(), apartments.end());
    for (ll i = 0, j = 0; i < n && j < m;) {
        if (abs(apartments[j] - applicants[i]) <= k) {
            i++;
            j++;
            ans++;

        } else if (apartments[j] < applicants[i]) {
            j++;
        } else if (apartments[j] > applicants[i]) {
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}