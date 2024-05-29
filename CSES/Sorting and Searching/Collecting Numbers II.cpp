#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
using ll = long long;
#define endl "\n"
vector<pair<ll, ll>> x;
ll collectRound(ll changeone, ll changetwo, vector<pair<ll, ll>> changex) {
    ll ans = 1;
    ll changesize = 0;
    changesize = changex.size();
    ll changeonevalue = changex[changeone - 1].first;
    ll changetwovalue = changex[changetwo - 1].first;
    changex[changeone - 1].first = changetwovalue;
    changex[changeone - 1].second = changeone - 1;
    changex[changetwo - 1].first = changeonevalue;
    changex[changetwo - 1].second = changetwo - 1;
    x = changex;
    sort(changex.begin(), changex.end());
    for (ll i = 1; i < changesize; i++) {
        if (changex[i].second < changex[i - 1].second)
            ans++;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll n = 0, m = 0;
    cin >> n >> m;
    x.resize(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i].first;
        x[i].second = i;
    }
    ll arr[m][2];
    ll ans[m];
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < 2; j++)
            cin >> arr[i][j];
    }
    for (ll i = 0; i < m; i++) {
        ll a = arr[i][0];
        ll b = arr[i][1];
        ans[i] = collectRound(a, b, x);
        cout << ans[i] << endl;
    }
    return 0;
}