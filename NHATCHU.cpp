// https://luyencode.net/problem/NHATCHU
// NHATCHU - Robot nhặt chữ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool d[300] = {0};
    for (auto x : s)
    {
        if (!d[x] || !d[x + 32] || !d[x - 32])
        {
            cout << x;
            d[x] = d[x + 32] = d[x - 32] = 1;
        }
    }
    return 0;
}