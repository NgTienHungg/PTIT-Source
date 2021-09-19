// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/D
// D. Just BFS-DFS

#include <bits/stdc++.h>
using namespace std;

int n, stop = 0;
vector<vector<int>> a;

void read() {
    cin >> n;
    a.resize(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
}

void DFS(string s, int i, int j) {
    // Biến stop để dừng các đệ quy không cần thiết nữa khi đã in ra cấu hình đầu tiên t.m
    if (stop || i > n || j > n) return;

    if (i == n && j == n) {
        cout << s;
        stop = 1;
        return;
    }

    if (i < n && a[i + 1][j]) {
        DFS(s + 'D', i + 1, j);
        a[i + 1][j] = 0;
    }

    if (j < n && a[i][j + 1]) {
        DFS(s + 'R', i, j + 1);
        a[i][j + 1] =  0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);

    read();
    if (!a[1][1] || !a[n][n]) {
        cout << -1;
        return 0;
    }
    DFS("", 1, 1);
    
    // Nếu không tìm được đường đến (n,n) stop vẫn đang = 0
    if (!stop)
        cout << -1;
    return 0;
}