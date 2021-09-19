// https://www.spoj.com/PTIT/problems/P175PROE/
// P175PROE - ROUND 5E - Tổng chữ số

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll &sum, ll &count)
{
    ll res = 0;
    while (sum > 0)
    {
        res += sum % 10;
        sum /= 10;
    }
    sum = res;
    count += 1;
}

int main()
{
    string s;
    cin >> s;
    if (s.length() == 1)
        cout << 0;
    else
    {
        ll count = 1;
        ll sum = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            sum += s[i] - '0';
        }
        while (sum >= 10)
        {
            solve(sum, count);
        }
        cout << count;
    }
    return 0;
}