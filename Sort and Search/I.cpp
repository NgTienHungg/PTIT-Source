// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/I
// I. [ProPTIT-Algorithm-Sort and Search] Sắp xếp chữ số

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n;
vector<string> v(1005);

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void solve()
{
    string res = "";
    for (int i = 0; i < n; i++)
        res = res + v[i];
    sort(res.begin(), res.end());
    for (int i = 0; i < res.length(); i++)
        cout << res[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    solve();
    return 0;
}