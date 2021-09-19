// https://luyencode.net/problem/ENCRYPT
// ENCRYPT - Mã hóa mật khẩu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (auto x : s)
    {
        if (x >= '0' && x <= '9')
            sum += x - '0';
        else
            cout << x;
    }
    cout << sum;
    return 0;
}