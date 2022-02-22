// https://luyencode.net/problem/STR02
// STR02 - Chuẩn hóa tên riêng

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i)
    {
        if (i == 0 || s[i - 1] == ' ')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
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