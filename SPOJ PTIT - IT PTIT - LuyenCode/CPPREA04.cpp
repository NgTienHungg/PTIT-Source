// https://www.spoj.com/PTIT/problems/CPPREA04/
// CPPREA04 - Re-arrang Array 4

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[1005], b[1005];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int index = 0;
    for (int i = 0; i < n; i += 2)
        b[i] = a[index++];
    for (int i = 1; i < n; i += 2)
        b[i] = a[index++];
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}