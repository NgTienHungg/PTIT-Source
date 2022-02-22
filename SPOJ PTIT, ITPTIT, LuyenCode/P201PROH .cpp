// https://www.spoj.com/PTIT/problems/P201PROH/
// P201PROH - Biến đổi

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if ((a == 1 || a == 3) && a < b)
        cout << "NO\n";
    else
        cout << "YES\n";
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

// a = 3 mà chưa t/m thì xảy ra vòng lặp vô hạn
// a = 1 mà chưa t/m thì không thể biến đổi nữa