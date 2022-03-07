// https://code.ptit.edu.vn/student/question/DSA01028
// LIỆT KÊ TỔ HỢP

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= k; ++i) {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n; ++j) {
        b[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    set<int> s;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }
    a.push_back(-1);
    for (auto i : s) a.push_back(i);
    n = s.size();
    b.resize(n + 1);
    for (int i = 0; i <= n; ++i) {
        b[i] = i;
    }
    Try(1);
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