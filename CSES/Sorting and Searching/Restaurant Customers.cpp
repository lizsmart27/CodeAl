#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
using ll = long long;
#define endl "\n"
vector<pair<int, int>> ab;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int ans = 0, cnt = 0;
    int n;
    cin >> n;
    ab.resize(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> ab[i].first;
        ab[i].second = i % 2;
    }
    sort(ab.begin(), ab.end());
    for (auto p : ab) {
        if (p.second == 0) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt--;
        }
    }
    cout << ans << endl;
    return 0;
}