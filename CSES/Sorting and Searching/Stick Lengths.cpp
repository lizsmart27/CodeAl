#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
using ll = long long;
#define endl "\n"
vector<ll> sticks;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll n = 0;
    ll mid = 0, cost = 0;
    cin >> n;
    sticks.resize(n);
    for (int i = 0; i < n; i++)
        cin >> sticks[i];
    sort(sticks.begin(), sticks.end());

    mid = sticks[n / 2];

    for (int i = 0; i < n; i++) {
        cost = cost + abs(sticks[i] - mid);
    }
    cout << cost << endl;
    return 0;
}