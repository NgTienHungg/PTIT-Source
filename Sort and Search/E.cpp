// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/E
// E. [ProPTIT-Algorithm-Sort and Search] Sắp xếp

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int t, n;
int a[100005];
int dd[100005];

void init()
{
    // Reset mảng đánh dấu
    for (int i = 0; i < 100005; i++)
        dd[i] = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dd[a[i]]++;
    }
}

bool cmp(int a, int b)
{
    if (dd[a] < dd[b])
        return 0;
    if (dd[a] == dd[b])
        if (a > b)
            return 0;
    return 1;
}

void solve()
{
    set<int> s(a, a + n);
    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < dd[v[i]]; j++)
            cout << v[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
    return 0;
}

//! n <= 1e5