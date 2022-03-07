// https://code.ptit.edu.vn/student/question/DSA02014
// TỪ ĐIỂN

#include <bits/stdc++.h>
using namespace std;

const int dr[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
const int dc[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int k, n, m;
map<string, int> dic;
vector<vector<string>> a;
vector<vector<bool>> vs;
vector<string> res;

void Try(int i, int j, string s) {
    if (dic[s]) res.push_back(s);
    for (int z = 0; z < 8; ++z) {
        int x = i + dr[z];
        int y = j + dc[z];
        if (x >= 0 && x < n && y >= 0 && y < m && vs[x][y] == 0) {
            vs[x][y] = 1;
            Try(x, y, s + a[x][y]);
            vs[x][y] = 0;
        }
    }
}

void testCase() {
    dic.clear(); res.clear();
    cin >> k >> n >> m;
    while (k--) {
        string s; cin >> s;
        dic[s] = 1;
    }
    a.clear(); a.resize(n, vector<string>(m));
    vs.clear(); vs.resize(n, vector<bool>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            vs[i][j] = 1;
            Try(i, j, a[i][j]);
            vs[i][j] = 0;
        }
    }
    if (res.empty()) {
        cout << -1;
        return;
    }
    for (string i : res) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}