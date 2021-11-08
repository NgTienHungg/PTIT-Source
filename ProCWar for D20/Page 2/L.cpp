#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    while (n--) {
        int x; cin >> x;
        q.push(x);
    }
    long long ans = 0;
    while (q.size() >= 2) {
        int x = q.top(); q.pop();
        x += q.top(); q.pop();
        ans += 20000 - x;
        q.push(x);
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