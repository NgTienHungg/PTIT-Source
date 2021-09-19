// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/L
// L. Đếm cặp

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());
    long long res = 0;
    vector<int>::iterator it;
    for (int i = 0; i < n; ++i) {
        it = upper_bound(a.begin() + i + 1, a.end(), a[i] + k - 1);
        res += it - (a.begin() + i + 1);
    }
    cout << res;
    return 0;
}