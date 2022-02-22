#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        while (!dq.empty() && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (dq.front() == i - k)
            dq.pop_front();
        if (i + 1 >= k)
            cout << a[dq.front()] << " ";
    }
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