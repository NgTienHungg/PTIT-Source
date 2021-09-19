// https://codeforces.com/contest/1515/problem/A
// A. Phoenix and Gold

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    if (a < b)
        return 0;
    return 1;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int sum = 0;
    int a[1005];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum == x)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    sum = 0;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
    {
        if (sum + a[i] == x)
        {
            int j = i + 1;
            while (a[j] == a[i])
                j++;
            swap(a[i], a[j]);
        }
        sum += a[i];
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

// Tổng mảng = x thì NO, ngược lại YES