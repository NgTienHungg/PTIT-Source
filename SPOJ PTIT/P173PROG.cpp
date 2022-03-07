// https://www.spoj.com/PTIT/problems/P173PROG/
// P173PROG - ROUND 3G - Biến đổi xâu kí tự

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
        i--;
    if (i < 0)
    {
        cout << "BIGGEST\n";
        return;
    }
    else
    {
        for (int j = s.length() - 1; j > i; j--)
            if (s[j] > s[i])
            {
                swap(s[i], s[j]);
                break;
            }
        sort(s.begin() + i + 1, s.end());
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}