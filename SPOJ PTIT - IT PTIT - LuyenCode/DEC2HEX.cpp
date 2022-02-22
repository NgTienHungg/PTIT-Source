// https://luyencode.net/problem/DEC2HEX
// DEC2HEX - Đổi hệ thập phân sang hệ cơ số 16

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    long long n;
    cin >> n;
    string s = "";
    while (n > 0)
    {
        int x = n % 16;
        if (x >= 10)
            s = s + char(x - 10 + 'A');
        else
            s = s + char(x + '0');
        n /= 16;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
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