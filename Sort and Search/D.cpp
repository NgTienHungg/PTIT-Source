// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/D
// D. [ProPTIT-Algorithm-Sort and Search] Simple Search

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int t, n, k;
vector<int> v;

void init()
{
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void solve()
{
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        int x = k - v[i];
        if (x < v[i])
            break;
        vector<int>::iterator low = lower_bound(v.begin() + i + 1, v.end(), x);
        vector<int>::iterator up = upper_bound(v.begin() + i + 1, v.end(), x);
        d += up - low;
    }
    cout << d << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        init();
        sort(v.begin(), v.end());
        solve();
    }
    return 0;
}