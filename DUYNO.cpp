// https://luyencode.net/problem/DUYNO
// DUYNO - Con số duyên nợ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        if (s.front() == s.back())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}