// https://codeforces.com/group/eFlt2UuXYv/contest/345055/problem/A
// A. Tổ hợp

#include <bits/stdc++.h>
#define endl '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

const int mod = 1e9 + 7;
long long a[1001][1001];

void pretreatment() {
    for (int i = 0; i <= 1000; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else if (j == 1)
                a[i][j] = i;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            a[i][j] %= mod;
        }
    }
}

int main() {
    faster();
    pretreatment();
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("%lld\n", a[n][k]);
    }
    return 0;
}