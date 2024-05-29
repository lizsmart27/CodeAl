#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
using ll = long long;
#define endl "\n"
vector<ll> tickP;
vector<ll> custP;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll ticN;
    ll custN;
    cin >> ticN >> custN;
    tickP.resize(ticN);
    custP.resize(custN);
    for (auto &i : tickP)
        cin >> i;
    for (auto &i : custP)
        cin >> i;
    sort(tickP.begin(), tickP.end());
    for (auto i : custP) {
        if (tickP.empty()) {
            cout << -1 << endl;
            continue;
        }
        auto it = upper_bound(tickP.begin(), tickP.end(), i);
        if (it != tickP.begin()) {
            --it;
            cout << *it << endl;
            tickP.erase(it);
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}