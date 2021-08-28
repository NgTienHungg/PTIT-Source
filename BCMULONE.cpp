// https://www.spoj.com/PTIT/problems/BCMULONE/
// BCMULONE - Nhân 1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    string s1 = "123456790", s2 = "098765432";
    int x = (n - 1) / 9;
    int y = (n - 1) % 9;

    for (int i = 1; i <= x; i++)
        cout << s1;
    for (int i = 1; i <= y; i++)
        cout << i;
    for (int i = y + 1; i >= 2; i--)
        cout << i;
    for (int i = 1; i <= x; i++)
        cout << s2;
    cout << "1\n";
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

// Khonggggg hieuuuuu