#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"
vector<pair<int, int>> movDiskFormTo;
void Hanoi(int n, int formButton, int tempButton, int endButton) {
    if (n == 1) {
        movDiskFormTo.push_back({formButton, endButton});
        return;
    }
    Hanoi(n - 1, formButton, endButton, tempButton);
    Hanoi(1, formButton, endButton, endButton);
    Hanoi(n - 1, tempButton, formButton, endButton);
    return;
}
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int num;
    cin >> num;
    Hanoi(num, 1, 2, 3);
    cout << movDiskFormTo.size() << endl;
    for (auto mi : movDiskFormTo) {
        cout << mi.first << " " << mi.second << endl;
    }
    return 0;
}