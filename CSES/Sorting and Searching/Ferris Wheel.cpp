#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
using ll = long long;
#define endl "\n"
ll childNum;
vector<ll> childWeight;
ll maxWeight;
ll ans = 0;
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    cin >> childNum;
    childWeight.resize(childNum);
    cin >> maxWeight;
    for (ll i = 0; i < childNum; i++)
        cin >> childWeight[i];
    sort(childWeight.begin(), childWeight.end());
    for (ll i = 0, j = (childNum - 1); i <= j;) {
        if (i == j) {
            ans++;
            break;
        }
        if ((childWeight[i] + childWeight[j]) <= maxWeight) {
            i++;
            j--;
            ans++;
        } else {
            j--;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}