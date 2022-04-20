// https://code.ptit.edu.vn/student/question/DSA08022
// BỘI SỐ LỚN NHẤT CỦA 3

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int x, sum = 0;
    vector<int> res;
    priority_queue<int, vector<int>, greater<int>> q1, q2;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
        if (x % 3 == 1) q1.push(x);
        else if (x % 3 == 2) q2.push(x);
        else res.push_back(x);
    }
    if (sum % 3 == 1) {
        if (!q1.empty()) q1.pop();
        else if (q2.size() >= 2) { q2.pop(); q2.pop(); }
        else { cout << -1; return; }
    }
    if (sum % 3 == 2) {
        if (!q2.empty()) q2.pop();
        else if (q1.size() >= 2) { q1.pop(); q1.pop(); }
        else { cout << -1; return; }
    }
    while (!q1.empty()) { res.push_back(q1.top()); q1.pop(); }
    while (!q2.empty()) { res.push_back(q2.top()); q2.pop(); }
    if (res.empty()) cout << -1;
    else {
        sort(res.rbegin(), res.rend());
        while (res.size() > 1 && res[0] == 0) res.pop_back();
        for (int i : res) cout << i;
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