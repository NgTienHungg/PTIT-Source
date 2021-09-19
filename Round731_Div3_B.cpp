// https://codeforces.com/contest/1547/problem/B
// B. Alphabetical Strings

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string s)
{
    int dd[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        dd[s[i] - 'a'] = 1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (!dd[i])
            return 0;
    }
    return 1;
}

void TestCase()
{
    string s;
    cin >> s;

    if (!check(s))
    {
        cout << "NO\n";
        return;
    }

    char c = 'b';
    string res = "a";
    for (int i = 1; i < s.length(); i++)
    {
        if (s.find(c) < s.find(c - 1))
            res = c + res;
        else
            res = res + c;
        c += 1;
    }
    if (res == s)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}