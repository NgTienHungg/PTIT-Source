// https://www.spoj.com/PTIT/problems/PTIT122C/
// PTIT122C - Giai thừa 2

#include <bits/stdc++.h>
using namespace std;

string Sum(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;
    string res = {};
    int remember = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int num = (a[i] - '0') + (b[i] - '0') + remember;
        remember = num / 10;
        res = char(num % 10 + '0') + res;
    }
    if (remember > 0)
        res = char(remember + '0') + res;
    return res;
}

string Multiply(string a, string b)
{
    if (a == "0" || b == "0")
        return "0";
    int len1 = a.length();
    int len2 = b.length();
    int len = len1 + len2;
    string ans(len, '0');
    for (int i = len2 - 1; i >= 0; i--)
    {
        int t = len2 - 1 - i; // Số chữ số 0 cuối cùng của res (theo quy tắc nhân)
        string res(t, '0');
        int remember = 0;
        for (int j = len1 - 1; j >= 0; j--)
        {
            int num = (a[j] - '0') * (b[i] - '0') + remember;
            remember = num / 10;
            res = char(num % 10 + '0') + res;
        };
        if (remember > 0)
            res = char(remember + '0') + res;
        ans = Sum(ans, res);
    }
    while (ans[0] == '0')
        ans.erase(0, 1);
    return ans;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    if (n == 0)
    {
        if (x == 1)
            cout << "1\n";
        else
            cout << "0\n";
        return;
    }
    string s = "1";
    char c = x + '0';
    for (int i = 1; i <= n; i++)
        s = Multiply(s, to_string(i));
    int d = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            d++;
    cout << d << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

//! TH: n = 0