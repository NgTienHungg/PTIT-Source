// https://code.ptit.edu.vn/student/question/DSA01008
// XÂU NHỊ PHÂN CÓ K BIT 1

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

void solve() {
    int cou = 0;
    for (int i : a) {
        if (i == 1) cou++;
    }
    if (cou == k) {
        for (int i : a) cout << i;
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    Try(0);
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