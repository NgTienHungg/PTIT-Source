// https://codeforces.com/contest/1520/problem/B
// B. Ordinary Numbers

#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;
    if (a <= b)
        return 1;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int d = 0;
    for (int i = 1; i <= 9; i++)
    {
        char c = i + '0';
        string res = "";
        res = res + c;
        while (cmp(res, s))
        {
            d++;
            res = res + c;
        }
    }
    cout << d << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}