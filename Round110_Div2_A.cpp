// https://codeforces.com/contest/1535/problem/A
// A. Fair Playoff

#include <bits/stdc++.h>
using namespace std;

vector<int> v(4);
int max1, max2;

void solve()
{
    for (int i = 0; i < 4; i++)
        cin >> v[i];
    max1 = max(v[0], v[1]);
    max2 = max(v[2], v[3]);
    sort(v.begin(), v.end());
    if ((max1 == v[2] && max2 == v[3]) || (max1 == v[3] && max2 == v[2]))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
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