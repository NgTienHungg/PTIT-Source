// https://vn.spoj.com/problems/KPLANK/
// KPLANK - Bán dừa

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> v(n), l(n), r(n);
    stack<int> a, b;
    for (auto &x : v)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        while (!a.empty() && v[a.top()] >= v[i])
            a.pop();
        if (a.empty())
            l[i] = 0;
        else
            l[i] = a.top() + 1;
        a.push(i);
    }
    for (int i = n - 1; i >= 0; --i)
    {
        while (!b.empty() && v[b.top()] >= v[i])
            b.pop();
        if (b.empty())
            r[i] = n - 1;
        else
            r[i] = b.top() - 1;
        b.push(i);
    }
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (r[i] - l[i] + 1 >= v[i])
            res = max(res, v[i]);
    }
    cout << res;
    return 0;
}