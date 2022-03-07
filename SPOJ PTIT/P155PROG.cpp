// https://www.spoj.com/PTIT/problems/P155PROG/
// P155PROG - ROUND 5G - Tặng quà

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> as(n + 1);
    for (int i = 1; i <= n; i++)
        as[v[i]] = i;

    for (int i = 1; i <= n; i++)
        cout << as[i] << " ";
    return 0;
}