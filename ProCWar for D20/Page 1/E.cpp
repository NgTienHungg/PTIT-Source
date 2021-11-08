#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; scanf("%d", &n);
    vector<long long> a(n);
    long long sum = 0;
    for (auto &x : a) {
        scanf("%lld", &x);
        sum += x;
    }
    sort(a.begin(), a.end());
    
    int m; scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
        if (pos == n) pos--;
        long long ans = max(0LL, x - a[pos]) + max(0LL, y - (sum - a[pos]));
 
        // TH2:
        if (pos > 0) {
            pos--;
            long long TH2 = max(0LL, x - a[pos]) + max(0LL, y - (sum - a[pos]));
            ans = min(ans, TH2);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
 
// 4
// 1 3 5 10
// 1
// 7 14