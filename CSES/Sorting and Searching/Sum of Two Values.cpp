#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
using ll = long long;
#define endl "\n"
vector<pair<int, int>> a;

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int n = 0, x = 0, ans = 0;
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0, j = n - 1; j > i;) {
        if ((a[i].first + a[j].first) == x) {
            cout << a[i].second << " " << a[j].second << endl;
            i++;
            j--;
            ans++;
            break;
        } else if ((a[i].first + a[j].first) > x) {
            j--;
        } else if ((a[i].first + a[j].first) < x) {
            i++;
        }
    }
    if (ans == 0)
        cout << "IMPOSSIBLE" << endl;
    return 0;
}