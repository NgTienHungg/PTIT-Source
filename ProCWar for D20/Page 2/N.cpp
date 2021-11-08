#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vs[50][50]= {0}, ok = 0;
string key;
vector<string> v;

const int X[4] = {0, -1, 0, 1};
const int Y[4] = {-1, 0, 1, 0};

void Try(int index, int i, int j, string s) {
    if (index == key.length()) ok = 1;
    if (ok || s[index] != key[index]) return;


    for (int k = 0; k < 4; ++k) {
        int x = i + X[k];
        int y = j + Y[k];
        if (x >= 0 && x < n && y >= 0 && y < m && !vs[x][y]) {
            vs[x][y] = 1;
            Try(index + 1, x, y, s + v[x][y]);
            vs[x][y] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cin >> key;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!vs[i][j]) {
                vs[i][j] = 1;
                Try(0, i, j, string(1, v[i][j]));
                vs[i][j] = 0;
            }
        }
    }
    if (ok) cout << "Yes";
    else cout << "No";
    return 0;
}