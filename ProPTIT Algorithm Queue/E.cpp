// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/E
// E. [ProPTIT-Algorithm-Queue] Đếm cặp

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a) {
        cin >> x;
    }
    sort(a, a + n);
    long long res = 0;
    for (int i = 0; i < n; ++i) {
        int p = upper_bound(a + i + 1, a + n, a[i] + k - 1) - (a + i + 1);
        res += p;
    }
    cout << res;
    return 0;
}