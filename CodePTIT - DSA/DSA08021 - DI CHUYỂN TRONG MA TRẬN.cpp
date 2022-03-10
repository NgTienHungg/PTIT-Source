// https://code.ptit.edu.vn/student/question/DSA08021
// DI CHUYỂN TRONG MA TRẬN

#include <bits/stdc++.h>
using namespace std;

struct Data {
    int r, c;
    int cou;

    Data(int r, int c, int cou) {
        this->r = r;
        this->c = c;
        this->cou = cou;
    }
};

void testCase() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    vector<vector<bool>> vs(n + 1, vector<bool>(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }

    queue<Data> q;
    q.push(Data(1, 1, 0));
    while (!q.empty()) {
        Data x = q.front();
        q.pop();

        int i = x.r, j = x.c;
        if (i == n && j == m) {
            cout << x.cou;
            return;
        }

        if (i + a[i][j] <= n && vs[i + a[i][j]][j] == 0) {
            vs[i + a[i][j]][j] = 1;
            q.push(Data(i + a[i][j], j, x.cou + 1));
        }
        if (j + a[i][j] <= m && vs[i][j + a[i][j]] == 0) {
            vs[i][j + a[i][j]] = 1;
            q.push(Data(i, j + a[i][j], x.cou + 1));
        }
    }
    cout << -1;
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