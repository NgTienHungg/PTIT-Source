#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, ans;
vector<string> G;
pair<int, int> S, T;
vector<vector<bool>> vs;

void bfs() {
    vs.clear();
    vs.resize(n, vector<bool>(n, 0));
    vs[S.first][S.second] = 1;

    queue<pair<pair<int, int>, int>> q;
    q.push({S, 0});

    while (!q.empty()) {
        pair<int, int> p = q.front().first;
        int cou = q.front().second;
        q.pop();

        // Di chuyen sang ngang
        for (int i = p.second - 1; i >= 0; --i) {
            if (G[p.first][i] == 'X')
                break;
            if (!vs[p.first][i]) {
                if (p.first == T.first && i == T.second) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[p.first][i] = 1;
                    q.push({{p.first, i}, cou + 1});
                }
            }
        }
        for (int i = p.second + 1; i < n; ++i) {
            
            if (G[p.first][i] == 'X')
                break;
            if (!vs[p.first][i]) {
                if (p.first == T.first && i == T.second) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[p.first][i] = 1;
                    q.push({{p.first, i}, cou + 1});
                }
            }
        }

        // Di chuyen len xuong
        for (int i = p.first - 1; i >= 0; --i) {
            if (G[i][p.second] == 'X')
                break;
            if (!vs[i][p.second]) {
                if (i == T.first && p.second == T.second) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[i][p.second] = 1;
                    q.push({{i, p.second}, cou + 1});
                }
            }
        }
        for (int i = p.first + 1; i < n; ++i) {
            if (G[i][p.second] == 'X')
                break;
            if (!vs[i][p.second]) {
                if (i == T.first && p.second == T.second) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[i][p.second] = 1;
                    q.push({{i, p.second}, cou + 1});
                }
            }
        }
    }
}

void TestCase() {
    cin >> n;
    ans = 1e9;
    G.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> G[i];
    }
    cin >> S.first >> S.second >> T.first >> T.second;
    bfs();
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}