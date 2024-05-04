#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int a, b;
        cin >> a >> b;
        if ((a + b) % 3 == 0 && 2 * b >= a && 2 * a >= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
