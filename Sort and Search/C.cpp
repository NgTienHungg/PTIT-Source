// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/C
// C. [ProPTIT-Algorithm-Sort and Search] Bigger Number

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int t;
string s1, s2;

void init()
{
    cin >> s1 >> s2;
}

void solve()
{
    sort(s2.rbegin(), s2.rend());
    int idx = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] < s2[idx])
            s1[i] = s2[idx++];
    }
    cout << s1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
    return 0;
}