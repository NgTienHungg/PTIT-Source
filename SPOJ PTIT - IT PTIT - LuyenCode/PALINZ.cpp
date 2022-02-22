// https://luyencode.net/problem/PALINZ
// PALINZ - Truy vấn xâu đối xứng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s = '@' + s;
    int t;
    cin >> t;
    while (t--)
    {
        cin.tie(0);
        int l, r;
        cin >> l >> r;
        string s1 = s.substr(l, r - l + 1);
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}