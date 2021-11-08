// https://code.ptit.edu.vn/student/question/CPP0733
// TÌM ĐƯỜNG TRONG MA TRẬN NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int n, m;
pair<int, int> S, T;
int a[1000][1000];

const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};

void BFS() {
    queue<pair<pair<int, int>, int>> q;
    q.push({{S.first, S.second}, 0});
    a[S.first][S.second] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front().first;
        int count = q.front().second;
        q.pop();

        if (p == T) {
            cout << count;
            return;
        }

        for (int i = 0; i < 4; ++i) {
            int x = p.first + X[i];
            int y = p.second + Y[i];
            if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == 1) {
                a[x][y] = 0;
                q.push({{x, y}, count + 1});
            }
        }
    }
    cout << -1;
}

void TestCase() {
    cin >> n >> m;
    cin >> S.first >> S.second >> T.first >> T.second;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    if (a[S.first][S.second] == 0 || a[T.first][T.second] == 0) {
        cout << -1;
        return;
    }
    BFS();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}