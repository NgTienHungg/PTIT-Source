#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        pq.push(x);
    }
    long long ans = 0;
    while (pq.size() >= 2) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        ans += x + y;
        pq.push(x + y);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}