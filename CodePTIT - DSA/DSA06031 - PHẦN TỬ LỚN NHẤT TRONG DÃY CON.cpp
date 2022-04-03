// https://code.ptit.edu.vn/student/question/DSA06031
// PHẦN TỬ LỚN NHẤT TRONG DÃY CON

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        if (dq.front() == i - k) dq.pop_front();
        while (!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.push_back(i);
        if (i + 1 >= k) cout << a[dq.front()] << " ";
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