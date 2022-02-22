// https://luyencode.net/problem/CHUANHOA
// CHUANHOA - Chuẩn hóa xấu

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    vector<string> v;
    while (s.front() == ' ')
        s.erase(0, 1);
    while (s.back() == ' ')
        s.erase(s.length() - 1, 1);
    while (1)
    {
        int p = s.find("  ");
        if (p == -1)
            break;
        s.erase(p, 1);
    }
    cout << s << endl;
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