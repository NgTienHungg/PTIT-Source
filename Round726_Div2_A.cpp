// https://codeforces.com/contest/1537/problem/A
// A. Arithmetic Array

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, a[55];
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s == n)
        cout << 0;
    else if (s < n)
        cout << 1;
    else
        cout << s - n;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        TestCase();
    return 0;
}