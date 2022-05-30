// https://code.ptit.edu.vn/student/question/DSA09034
// ĐẾM SỐ AO

#include <bits/stdc++.h>
using namespace std;

int n, m, ao;
vector<string> vuon;
int r[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int c[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void Bfs(int i, int j) {
    for (int k = 1; k < 8; ++k) {
        int x = i + r[k];
        int y = j + c[k];
        if (x >= 0 && x < n && y >= 0 && y < m && vuon[x][y] == 'W') {
            vuon[x][y] = '.';
            Bfs(x, y);
        }
    }
}

void TestCase() {
    ao = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        vuon.push_back(s);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (vuon[i][j] == 'W') {
                vuon[i][j] = '.';
                ao++;
                Bfs(i, j);
            }
        }
    }
    cout << ao;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}