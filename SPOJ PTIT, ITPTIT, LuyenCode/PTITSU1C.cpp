// https://www.spoj.com/PTIT/problems/PTITSU1C/
// PTITSU1C - Bài C - PTIT Summer 1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum, max = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if (sum <= m && sum > max)
                    max = sum;
            }

    cout << max << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}