// https://luyencode.net/problem/HEX2DEC
// HEX2DEC - Đổi hệ cơ số 16 sang hệ thập phân

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    long long res = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        int x;
        if (s[i] >= '0' && s[i] <= '9')
            x = s[i] - '0';
        else
            x = (s[i] - 'A') + 10;
        res = res * 16 + x;
    }
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