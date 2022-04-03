#include <bits/stdc++.h>
using namespace std;

int n, s, res;
vector<int> a;

void Try(int i, int sum, int cou) {
    if (sum == s) {
        res = min(res, cou);
        return;
    }
    if (i == n or cou >= res or sum > s) {
        return;
    }
    for (int j = 0; j <= 1; ++j) {
        Try(i + 1, sum + j * a[i], cou + j);
    }
}

void testCase() {
    res = INT_MAX;
    cin >> n >> s;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(0, 0, 0);
    if (res == INT_MAX) res = -1;
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}