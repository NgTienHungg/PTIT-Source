// https://www.spoj.com/PTIT/problems/P202PROF/
// P202PROF - Tăng sức mạnh

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = max(0, (b + c - a + 2) / 2);
    cout << max(0, c - x + 1) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

//! Khó quá @@