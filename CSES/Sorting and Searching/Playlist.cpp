#include <iostream>
#include <vector>
#include <array>
#include <set>
using namespace std;
using ll = long long;
#define endl "\n"
vector<int> k;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int n, ans = 0;
    cin >> n;
    k.resize(n);
    set<int> unique;
    for (int i = 0, start = 0; i < n; i++) {
        cin >> k[i];
        auto it = unique.find(k[i]);
        while (it != unique.end()) {
            unique.erase(k[start]);
            start++;
            it = unique.find(k[i]);
        }
        unique.insert(k[i]);
        ans = max(ans, (int)unique.size());
    }
    cout << ans << endl;
    return 0;
}