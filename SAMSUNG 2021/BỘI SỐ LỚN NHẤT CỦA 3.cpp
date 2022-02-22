#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> pq1, pq2;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        sum += x;
        if (x % 3 == 0) v.push_back(x);
        else if (x % 3 == 1) pq1.push(x);
        else pq2.push(x);
    }

    if (sum % 3 == 1) {
        if (pq1.size() >= 1) pq1.pop();
        else if (pq2.size() >= 2) {
            pq2.pop();
            pq2.pop();
        }
        else {
            cout << -1;
            return;
        }
    }
    else if (sum % 3 == 2) {
        if (pq2.size() >= 1) pq2.pop();
        else if (pq1.size() >= 2) {
            pq1.pop();
            pq1.pop();
        }
        else {
            cout << -1;
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

    if (v.empty())
        cout << -1;
    else {
        sort(v.rbegin(), v.rend());
        for (auto x : v) {
            cout << x;
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}