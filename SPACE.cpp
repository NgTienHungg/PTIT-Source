// https://luyencode.net/problem/SPACE
// SPACE - Đếm khoảng trắng trong chuỗi

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    int d = 0;
    while (1)
    {
        int p = s.find(" ");
        if (p == -1)
            break;
        d++;
        while (p < s.length() && s[p] == ' ')
            s.erase(p, 1);
    }
    cout << d << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
        solve();
    return 0;
}