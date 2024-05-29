#include <iostream>
#include <vector>
#include <array>
#include <set>
using namespace std;
using ll = long long;
#define endl "\n"
multiset<int> msTower;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        auto it = msTower.upper_bound(c);
        if (it != msTower.end()) {
            msTower.erase(it);
        }
        msTower.insert(c);
    }
    cout << msTower.size() << endl;
    return 0;
}