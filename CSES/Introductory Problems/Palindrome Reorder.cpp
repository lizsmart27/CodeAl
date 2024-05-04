#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
using ll = long long;
#define endl "\n"
vector<int> abc(26);
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    string strIn;
    cin >> strIn;
    for (int i = 0; i < strIn.length(); i++) {
        abc[strIn[i] - 'A']++;
    }
    string strOut = "";
    char midChar = '0';
    for (int i = 0; i < 26; i++) {
        if (abc[i] % 2 == 0) {
            strOut.append(abc[i] / 2, i + 'A');
        } else {
            if (midChar != '0') {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            midChar = i + 'A';
            strOut.append(abc[i] / 2, i + 'A');
        }
    }
    string strOutRev = strOut;
    reverse(strOutRev.begin(), strOutRev.end());
    if (midChar != '0') {
        strOut = strOut + midChar;
    }
    strOut += strOutRev;
    cout << strOut << endl;
    return 0;
}