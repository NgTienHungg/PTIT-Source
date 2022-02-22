#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, ans;
string S, T;
vector<string> v;
map<string, vector<string>> G; // danh sách kề
map<string, pair<bool, int>> vs; // first: kiểm tra đã duyệt chưa, second: độ sâu đường đi tính đến string hiện tại.

int dif(string a, string b) {
    int d = 0;
    for (int i = 0; i < a.length(); ++i) {
        d += (a[i] != b[i]);
    }
    return d;
}

void bfs(string S) {
    queue<string> q;
    q.push(S);
    vs[S] = {1, 1};
    
    while (!q.empty()) {
        string s = q.front();
        q.pop();

        for (int i = 0; i < G[s].size(); ++i) {
            string next = G[s][i];
            if (vs[T].first == 1 && vs[next].first == 1) {
                ans = vs[s].second + vs[next].second;
                return;
            }
            if (vs[next].first == 0) {
                q.push(next);
                vs[next] = {1, vs[s].second + 1};
            }
        }
    }
}

void TestCase() {
    cin >> n >> S >> T;
    v.clear(); v.resize(n);
    G.clear();
    vs.clear();
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        vs[v[i]] = {0, 0};
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dif(v[i], v[j]) == 1)
                G[v[i]].push_back(v[j]);
        }
    }
    bfs(S);
    bfs(T);
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

// 1
// 8 TOON  PLEA
// POON TOON PLEE SAME  POIE  PLEA  PLIE  POIN