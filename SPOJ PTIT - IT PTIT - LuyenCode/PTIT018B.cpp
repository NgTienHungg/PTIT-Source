// https://www.spoj.com/PTIT/problems/PTIT018B/
// PTIT018B - ACM PTIT 2018 B - HAI DÃY SỐ HỢP NHAU

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            cout << "NO\n";
            return;
        }
    }
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