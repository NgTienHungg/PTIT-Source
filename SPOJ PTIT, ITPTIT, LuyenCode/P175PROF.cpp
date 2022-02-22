// https://www.spoj.com/PTIT/problems/P175PROF/
// P175PROF - ROUND 5F - Biến đổi xy

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int countX = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'x')
            countX++;
    }
    int countY=s.length()-countX;
    int count = abs(countX - countY);
    if (countX > countY)
        for (int i = 0; i < count; ++i)
            cout << 'x';
    else
        for (int i = 0; i < count; ++i)
            cout << 'y';
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}