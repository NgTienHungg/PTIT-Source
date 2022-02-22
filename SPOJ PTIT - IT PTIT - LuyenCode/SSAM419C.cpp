// https://www.spoj.com/PTIT/problems/SSAM419C/
// SSAM419C - BƯỚC ĐI QUÂN MÃ

#include <bits/stdc++.h>
using namespace std;

// Sự thay đổi tọa độ ứng với vị trí mà quân mã di chuyển tới
const pair<int, int> Oxy[8] = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}};

struct Data {
    int r, c;
    int count = 0;

    Data(int r, int c, int count) : r(r), c(c), count(count) {}
};

void BFS(Data ST, Data EN) {
    // visited
    vector<vector<bool>> vst(8, vector<bool>(8, 0));
    vst[ST.r][ST.c] = 1;

    queue<Data> q;
    q.push(ST);

    while (!q.empty()) {
        Data temp = q.front();
        q.pop();

        if (temp.r == EN.r && temp.c == EN.c) {
            cout << temp.count << endl;
            return;
        }

        for (int i = 0; i < 8; ++i) {
            int x = temp.r + Oxy[i].first;
            int y = temp.c + Oxy[i].second;

            if (x >= 0 && x < 8 && y >= 0 && y < 8 && !vst[x][y]) {
                q.push(Data(x, y, temp.count + 1));
                vst[x][y] = 1;
            }
        }
    }
}

void TestCase() {
    pair<char, int> a, b;
    cin >> a.first >> a.second >> b.first >> b.second;
    Data ST(8 - a.second, a.first - 'a', 0);
    Data EN(8 - b.second, b.first - 'a', 0);
    BFS(ST, EN);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}