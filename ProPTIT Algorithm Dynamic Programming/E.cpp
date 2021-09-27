// https://codeforces.com/group/eFlt2UuXYv/contest/345055/problem/E
// E. Số xấu xí

#include <bits/stdc++.h>
using namespace std;

vector<long long> f(10000);
void pretreatment() {
    int i2 = 0, i3 = 0, i5 = 0;
    f[0] = 1;
    for (int i = 1; i < 10000; ++i) {
        f[i] = min({f[i2] * 2, f[i3] * 3, f[i5] * 5});

        if (f[i] == f[i2] * 2) i2++;
        if (f[i] == f[i3] * 3) i3++;
        if (f[i] == f[i5] * 5) i5++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    pretreatment();
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", f[n - 1]);
    }
    return 0;
}