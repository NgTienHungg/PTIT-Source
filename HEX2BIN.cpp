// https://luyencode.net/problem/HEX2BIN
// HEX2BIN - Đổi hệ cơ số 16 sang hệ nhị phân

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string solve(int x)
{
    string s = "";
    while (x > 0)
    {
        s = s + char(x % 2 + '0');
        x /= 2;
    }
    reverse(s.begin(), s.end());
    while (s.length() < 4)
        s = '0' + s;
    return s;
}

void TestCase()
{
    string s;
    cin >> s;
    string res = "";
    for (int i = 0; i < s.length(); ++i)
    {
        int x;
        if (s[i] >= 'A' && s[i] <= 'F')
            x = (s[i] - 'A') + 10;
        else if (s[i] >= '0' && s[i] <= '9')
            x = s[i] - '0';
        res = res + solve(x);
    }
    while (res[0] == '0')
        res.erase(0, 1);
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}