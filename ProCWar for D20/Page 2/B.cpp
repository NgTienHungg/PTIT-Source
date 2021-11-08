#include <bits/stdc++.h>
using namespace std;

long long n, m, q, k, x;
vector<long long> a, b;

bool binarySearch() {
    int l = 0, r = m - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (b[mid] == x) return 1;
        if (b[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d", &n, &m);
    a.resize(n); b.resize(m);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < m; ++i) scanf("%d", &b[i]);

    sort(a.rbegin(), a.rend());
    for (int i = 1; i < n; ++i) {
        a[i] += a[i - 1];
    }
    sort(b.begin(), b.end());

    scanf("%d", &q);
    while (q--) {
        scanf("%d", &k);
        x = a[k - 1];
        if (binarySearch())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}