// https://www.spoj.com/PTIT/problems/PTIT127I/
// PTIT127I - Bán vé số

#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int a[n][6];
    bool dd[50] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
            dd[a[i][j]] = 1;
        }
    for (int i = 1; i <= 49; i++)
        if (dd[i] == 0)
        {
            cout << "No\n";
            return;
        }
    cout << "Yes\n";
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        solve(n);
    }
    return 0;
}