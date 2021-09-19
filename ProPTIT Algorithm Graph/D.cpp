// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/D
// D. Just BFS-DFS

#include <bits/stdc++.h>
using namespace std;

struct Data {
    string s;
    int r, c;

    Data(string s, int r, int c) : s(s), r(r), c(c) {}
};

struct cmp {
    bool operator() (Data a, Data b) {
        return a.s > b.s;
    }
};

void BFS(int n, int a[201][201]) {
    priority_queue<Data, vector<Data>, cmp> pq;
    pq.push(Data("", 1, 1));

    while (!pq.empty()) {
        Data t = pq.top();
        pq.pop();
        a[t.r][t.c] = 0; //

        if (t.r == n && t.c == n) {
            cout << t.s;
            return;
        }

        if (t.r < n && a[t.r + 1][t.c]) {
            pq.push(Data(t.s + 'D', t.r + 1, t.c));
            a[t.r + 1][t.c] = 0;
        }
        
        if (t.c < n && a[t.r][t.c + 1]) {
            pq.push(Data(t.s + 'R', t.r, t.c + 1));
            a[t.r][t.c + 1] = 0;
        }
        
    }

    // Không có đường tới đích
    printf("-1");
}

int main() {
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[201][201] = {0};
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }

    if (!a[1][1] || !a[n][n])
        printf("-1");
    else
        BFS(n, a);
    return 0;
}