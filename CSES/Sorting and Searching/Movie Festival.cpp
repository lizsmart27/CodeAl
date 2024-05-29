#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
using ll = long long;
#define endl "\n"
struct Movie {
    int start;
    int end;
};
bool compareMovies(const Movie &a, const Movie &b) {
    return a.end < b.end;
}
int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Not safe to use cin/cout & scanf/printf together
    int n;
    cin >> n;
    vector<Movie> movies(n);
    for (int i = 0; i < n; i++) {
        cin >> movies[i].start >> movies[i].end;
    }
    sort(movies.begin(), movies.end(), compareMovies);
    int ans = 0;
    int cnt = 0;
    for (const auto &movie : movies) {
        if (movie.start >= cnt) {
            cnt = movie.end;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}