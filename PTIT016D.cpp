// https://www.spoj.com/PTIT/problems/PTIT016D/
// PTIT016D - ACM PTIT 2016 D - Biểu thức

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) { return a > b; }

int main()
{
    int n, k;
    cin >> n >> k;
    int a[100005];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a + 1, a + n, cmp);
    long long res = a[0];
    int i = 1;
    while (k--)
        res += a[i++];
    while (i < n)
        res -= a[i++];
    cout << res;
    return 0;
}