// https://www.spoj.com/PTIT/problems/BCATM2/
// BCATM2 - ATM 2

#include <bits/stdc++.h>
using namespace std;

int n, S, res = 1e9;
vector<int> v;

void Try(int i, int sum, int count)
{
    if (sum > S || count > res)
        return;
    if (i == n)
    {
        if (sum == S && count < res)
            res = count;
        return;
    }
    Try(i + 1, sum, count);
    Try(i + 1, sum + v[i], count + 1);
}

int main()
{
    cin >> n >> S;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.rbegin(), v.rend());

    Try(0, 0, 0);
    cout << res;
    return 0;
}