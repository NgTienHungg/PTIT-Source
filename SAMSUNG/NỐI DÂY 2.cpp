#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

void TestCase() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        pq.push(x);
    }

    long long ans = 0, len;
    while (pq.size() >= 2) {
        len = pq.top(); pq.pop();
        len = (len + pq.top()) % mod; pq.pop();
        ans = (ans + len) % mod;
        pq.push(len);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}