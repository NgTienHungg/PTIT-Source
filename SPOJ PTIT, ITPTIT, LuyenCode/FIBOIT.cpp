// https://code.itptit.com/problems/100053
// Số Fibonacci

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int f1 = 0, f2 = 1, res;
    for (int i = 2; i <= n; ++i)
    {
        res = (f1 + f2) % mod;
        f1 = f2;
        f2 = res;
    }
    cout << res;
    return 0;
}