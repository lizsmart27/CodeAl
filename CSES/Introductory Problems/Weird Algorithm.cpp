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
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        cout << n << " ";
    }

    return 0;
}