// https://codeforces.com/contest/1521/problem/A
// A. Nastia and Nearly Good Numbers

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, b;
    cin >> a >> b;
    int min = a * b;
    ll X = a * b;
    if (b == 1)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 1;; i++)
    {
        X *= i;
        if (X > 1e18)
        {
            cout << "NO\n";
            return;
        }
        ll Y = a;
        while (Y <= X / 2)
        {
            if ((X - Y) % a == 0 && 2 * Y != X && Y % min != 0 && (X - Y) % min != 0)
            {
                cout << "YES\n";
                cout << Y << " " << X - Y << " " << X << endl;
                return;
            }
            Y += a;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}