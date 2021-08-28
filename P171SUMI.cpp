// https://www.spoj.com/PTIT/problems/P171SUMI/
// P171SUMI - ROUND 1I - Not completely Palindrome

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int a[26] = {0};

    for (int i = 0; i < s.length(); i++)
        a[s[i] - 'a']++;

    int d = 0; // Số kí tự xuất hiện lẻ lần
    for (int i = 0; i < 26; i++)
        if (a[i] % 2 == 1)
            d++;
    if (d <= 3)
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

// 3 kí tự lẻ, biến 1 kí tự này thành kí tự kia => 2 kí tự chẵn, chỉ còn 1 kí tự lẻ, t/m
// 2 kí tự lẻ, biến 1  kí tự này thành kí tự kia => 2 kí tự chẵn, t/m
// 1 hoặc 0 kí tự lẻ, t/m