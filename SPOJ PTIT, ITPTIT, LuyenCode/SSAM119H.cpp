// https://www.spoj.com/PTIT/problems/SSAM119H/
// SSAM119H - TÌM SỐ DƯ

#include <bits/stdc++.h>
using namespace std;

int mod_2_3(int n)
{
    if (n % 4 == 0)
        return 6 + 1;
    if (n % 4 == 1)
        return 2 + 3;
    if (n % 4 == 2)
        return 4 + 9;
    if (n % 4 == 3)
        return 8 + 7;
}

int mod_4(int n)
{
    if (n % 2 == 0)
        return 6;
    if (n % 2 == 1)
        return 4;
}

void solve()
{
    string s;
    cin >> s;
    if (s.length() == 1)
        s = "0" + s;
    string str = s.substr(s.length() - 2);
    int num = atoi(str.c_str());
    if (num == 0)
        cout << 4 << endl;
    else
    {
        int res = 1; // 1^n
        res += mod_2_3(num) + mod_4(num);
        res %= 5;
        cout << res << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}