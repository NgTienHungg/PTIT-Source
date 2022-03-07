// https://luyencode.net/problem/HOUSE
// HOUSE - Sơn nhà

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int r = 0, d;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            d = 1;
            while (s[i] == s[i + 1])
                d++, i++;
            r += d / 2;
        }
    }
    cout << r;
    return 0;
}