// https://codeforces.com/contest/1551/problem/B1
// B1. Wonderful Coloring - 1

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int d[26] = {0};
    for (int i = 0; i < s.length(); ++i)
        d[s[i] - 'a']++;

    int res = 0, cou = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (d[i] == 1)
            cou++;
        else if (d[i] >= 2)
        {
            res += 1;
            d[i] = 0;
        }
    }
    res += cou / 2;
    cout << res << endl;
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