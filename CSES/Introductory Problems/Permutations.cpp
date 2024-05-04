#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    ll n;
    cin >> n;
    if (n <= 3 && n != 1) {
        cout << "NO SOLUTION";
        return 0; /* cod e */
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << 1 << " ";
        for (int i = 3; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    return 0;
}