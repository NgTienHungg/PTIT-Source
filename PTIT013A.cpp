// https://www.spoj.com/PTIT/problems/PTIT013A/
// PTIT013A - Bài A - Số may mắn

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 100 == 86)
        cout << 1;
    else
        cout << 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}