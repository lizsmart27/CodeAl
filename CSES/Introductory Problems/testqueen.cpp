#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"
char board[5][5];
int ans = 0;
int pixQ[5];
int isValid(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (pixQ[i] == col || (row - i) == abs(col - pixQ[i]))
            return 0;
    }
    return 1;
}
void search(int row) {
    if (row == 5) {
        ans++;
        return;
    }
    for (int col = 0; col < 5; col++) {
        if (board[row][col] == '*')
            continue;

        if (isValid(row, col) == 1) {
            pixQ[row] = col;
            search(row + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            cin >> board[y][x];
        }
    }
    search(0);
    cout << ans << endl;
    return 0;
}
