// https://www.spoj.com/PTIT/problems/BCFIBO/
// BCFIBO - Số fibonacci

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    long long a[n + 1];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= n; i++)
        a[i] = (a[i - 1] + a[i - 2]) % mod;
    cout << a[n];
    return 0;
}