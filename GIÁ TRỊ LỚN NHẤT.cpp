#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, x, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (x >= 0)
            ans += 2 * x;
    }
    cout << ans;
    return 0;
}