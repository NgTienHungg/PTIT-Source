// https://www.spoj.com/PTIT/problems/P155SUMB/
// P155SUMB - ROUND 5B - Chuyển đổi

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
        remember = num / 2;
        res = char(num % 2 + '0') + res;
    }
    if (remember > 0)
        res = char(remember + '0') + res;
    return res;
}

int main()
{
    string s;
    cin >> s;
    string res = "";
    for (int i = 1; i <= 17; ++i)
        res = Sum(res, s);
    cout << res;
    return 0;
}