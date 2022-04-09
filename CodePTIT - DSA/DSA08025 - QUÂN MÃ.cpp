// https://code.ptit.edu.vn/student/question/DSA08025
// QUÂN MÃ

#include <bits/stdc++.h>
using namespace std;

class Data {
public:
    int r, c;
    int cou;

    Data(int r, int c, int cou) {
        this->r = r;
        this->c = c;
        this->cou = cou;
    }
};

const pair<int, int> d[8] = {{-2, -1}, {-2, 1}, {-1, -2,}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

void BFS(Data st, Data en) {
    bool vs[10][10] = {};
    vs[st.r][st.c] = 1;
    queue<Data> q;
    q.push(st);

    while (!q.empty()) {
        Data u = q.front();
        q.pop();
        if (u.r == en.r && u.c == en.c) {
            cout << u.cou;
            return;
        }

        for (int i = 0; i < 8; ++i) {
            int x = u.r + d[i].first;
            int y = u.c + d[i].second;
            if (x >= 0 && x < 8 && y >= 0 && y < 8 && !vs[x][y]) {
                q.push(Data(x, y, u.cou + 1));
                vs[x][y] = 1;
            }
        }
    }
}

void testCase() {
    pair<char, int> a, b;
    cin >> a.first >> a.second >> b.first >> b.second;
    Data st = Data(8 - a.second, a.first - 'a', 0);
    Data en = Data(8 - b.second, b.first - 'a', 0);
    BFS(st, en);
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