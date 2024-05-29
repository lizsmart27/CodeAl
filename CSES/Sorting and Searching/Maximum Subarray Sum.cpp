#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"
vector<ll> a;

ll maxSubarraySumKadanes(vector<ll>& nums) {
    ll n = nums.size();
    ll maxSum = nums[0];
    ll currSum = nums[0];

    for (ll i = 1; i < n; i++) {
        currSum = max(currSum + nums[i], nums[i]);
        maxSum = max(currSum, maxSum);
    }

    return maxSum;
}
int main() {
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }

    ll maxSum = maxSubarraySumKadanes(nums);
    cout << maxSum << endl;

    return 0;
}