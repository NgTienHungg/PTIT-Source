// https://luyencode.net/problem/DEMSO
// DEMSO - Đếm số trong chuỗi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int d = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            d++;
            while (s[i] >= '0' && s[i] <= '9')
                i++;
        }
    }
    cout << d;
    return 0;
}