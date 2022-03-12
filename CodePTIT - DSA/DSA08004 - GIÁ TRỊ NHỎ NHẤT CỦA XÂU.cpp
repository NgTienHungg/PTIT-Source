// https://code.ptit.edu.vn/student/question/DSA08004
// GIÁ TRỊ NHỎ NHẤT CỦA XÂU

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int k; cin >> k;
    string s; cin >> s;
    int dd[127] = {};
    for (char i : s) dd[i]++;
    priority_queue<int> q;
    for (int i : dd) {
        if (i > 0) q.push(i);
    }
    while (k--) {
        if (q.empty()) break;
        int x = q.top(); q.pop();
        x--;
        q.push(x);
    }
    long long ans = 0;
    while (!q.empty()) {
        long long x = q.top(); q.pop();
        ans += x * x;
    }
    cout << ans;
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