#include <iostream>
#include <vector>
#include <array>

using namespace std;
using ll = long long;
#define endl "\n"
string board[8][8];
int ans = 0;
int pixQ[8];
int isValid(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (pixQ[i] == col || (row - i) == abs(col - pixQ[i]) || (row + i) == col + pixQ[i])
            return 0;
    }
    return 1;
}
void search(int row) {
    if (row == 8) {
        ans++;
        return;
    }
    for (int col = 0; col < 8; col++) {
        if (board[row][col] == "*")
            break;

        if (isValid(row, col) == 1) {
            pixQ[row] = col;
            search(row + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    for (int y = 0; y < 8; y++) {
        string strTemp;
        cin >> strTemp;
        for (int x = 0; x < 8; x++)
            board[y][x] = strTemp;
    }
    search(0);
    cout << ans << endl;
    return 0;
}
