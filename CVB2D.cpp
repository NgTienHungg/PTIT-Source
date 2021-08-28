// https://luyencode.net/problem/CVB2D
// CVB2D - Đổi hệ nhị phân sang thập phân

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    long long res = 0;
    for (int i = 0; i < s.length(); ++i)
        res = res * 2 + (s[i] - '0');
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