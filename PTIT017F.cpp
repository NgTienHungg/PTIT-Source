// https://www.spoj.com/PTIT/problems/PTIT017F/
// PTIT017F - ACM PTIT 2017 F - CHIA HẾT CHO 36

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s == "0")
    {
        cout << "YES\n";
        return;
    }

    int len = s.length();
    if (len < 2)
    {
        cout << "NO\n";
        return;
    }

    // Kiểm tra 2 chữ số cuối có chia hết 4 không
    string str = s.substr(len - 2);
    int num = atoi(str.c_str());
    if (num % 4 != 0)
    {
        cout << "NO\n";
        return;
    }

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    if (sum % 9 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}