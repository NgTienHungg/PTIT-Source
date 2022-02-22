// https://luyencode.net/problem/CVB2H
// CVB2H - Đổi hệ nhị phân sang hệ cơ số 16

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    while (s.length() % 4 != 0)
        s = '0' + s;

    for (int i = 0; i < s.length(); i += 4)
    {
        int x = 0;
        for (int j = 0; j < 4; ++j)
            x = x * 2 + (s[i + j] - '0');
        x < 10 ? cout << x : cout << char((x - 10) + 'A');
    }
    cout << endl;
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