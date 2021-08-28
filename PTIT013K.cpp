// https://www.spoj.com/PTIT/problems/PTIT013K/
// PTIT013K - BÀI K - SỐ NGUYÊN HỆ CƠ SỐ ACM

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll gt(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * gt(n - 1);
}

void solve()
{
    string s;
    cin >> s;
    string res = {};
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res.push_back(s[i]);
    }
    res = "0" + res;
    ll sum = 0;
    for (int i = 1; i < res.length(); i++)
    {
        sum += gt(i) * (res[i] - '0');
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}