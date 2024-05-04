#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"

vector<int> ary;

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll n;
    cin >> n;
    ary.resize(n);
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        ary[num] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (ary[i] != 1) {
            cout << i;
            break;
        }
    }
    return 0;
}