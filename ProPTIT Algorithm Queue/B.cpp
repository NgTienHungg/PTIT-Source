// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/B
// B. [ProPTIT-Algorithm-Queue] Bội số của 3

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n; cin >> n;
    int sum = 0;
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> pq1, pq2;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        sum += x;
        if (x % 3 == 0) v.push_back(x);
        else if (x % 3 == 1) pq1.push(x);
        else if (x % 3 == 2) pq2.push(x);
    }

    if (sum % 3 == 1) {
        if (!pq1.empty()) pq1.pop();
        else if (pq2.size() >= 2) {
            pq2.pop(); pq2.pop();
        }
        else {
            cout << "-1\n";
            return;
        }
    }
    else if (sum % 3 == 2) {
        if (!pq2.empty()) pq2.pop();
        else if (pq1.size() >= 2) {
            pq1.pop(); pq1.pop();
        }
        else {
            cout << "-1\n";
            return;
        }
    }
    while (!pq1.empty()) {
        v.push_back(pq1.top());
        pq1.pop();
    }
    while (!pq2.empty()) {
        v.push_back(pq2.top());
        pq2.pop();
    }

    if (v.empty()) cout << -1;
    else {
        sort(v.rbegin(), v.rend());
        if (v[0] == 0) cout << 0;
        else {
            for (auto x : v) cout << x;
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int T; cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}