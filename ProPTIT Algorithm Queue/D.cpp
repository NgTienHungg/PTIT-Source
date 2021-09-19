// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/D
// D. [ProPTIT-Algorithm-Queue] Tổng lớn nhất

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a) cin >> x;

    long long res[n] = {0};
    res[0] = a[0];

    deque<pair<long long, int>> dq;
    dq.push_back({a[0], 0});

    for (int i = 1; i < n; ++i) {
        res[i] = dq.front().first + a[i];
        while (!dq.empty() && dq.back().first <= res[i])
            dq.pop_back();
        dq.push_back({res[i], i});
        if (dq.front().second + k <= i)
            dq.pop_front();
    }
    cout << res[n - 1] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}