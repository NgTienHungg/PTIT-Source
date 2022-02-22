#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int k;
    string s;
    cin >> k >> s;

    if (k >= s.length()) {
        cout << 0;
        return;
    }

    int d[26] = {0};
    for (auto x : s) {
        d[x - 'A']++;
    }

    priority_queue<int> pq;
    for (int i = 0; i < 26; ++i) {
        pq.push(d[i]);
    }

    while (k--) {
        int x = pq.top();
        pq.pop();
        pq.push(x - 1);
    }

    long long ans = 0;
    while (!pq.empty()) {
        int x = pq.top();
        pq.pop();
        ans += (long long)x * x;
    }
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