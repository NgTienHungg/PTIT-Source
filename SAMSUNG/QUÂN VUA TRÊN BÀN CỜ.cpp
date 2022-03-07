#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int ans = 1e9;
bool vs[9][9];
pair<int, int> S, T;

const int X[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int Y[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void bfs() {
    int x, y;
    queue<pair<pair<int, int>, int>> q;
    q.push({S, 0});
    while (!q.empty()) {
        pair<int, int> p = q.front().first;
        int cou = q.front().second;
        q.pop();

        if (p == T) {
            ans = min(ans, cou);
            return;
        }

        for (int i = 0; i < 8; ++i) {
            x = p.first + X[i];
            y = p.second + Y[i];
            if (x >= 1 && x <= 8 && y >= 1 && y <= 8 && !vs[x][y]) {
                vs[x][y] = 1;
                q.push({{x, y}, cou + 1});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> S.first >> S.second >> T.first >> T.second;
    vs[S.first][S.second] = 1;
    bfs();
    cout << ans;
    return 0;
}