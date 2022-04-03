#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
vector<vector<int>> b;

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) b.push_back(a);
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.assign(k + 1, 0);
    b.clear();
    Try(1);
    for (int i = b.size() - 1; i >= 0; --i) {
        for (int j = 1; j < b[i].size(); ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
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