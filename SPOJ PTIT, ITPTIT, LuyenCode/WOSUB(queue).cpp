// https://luyencode.net/problem/WOSUB
// WOSUB - Đoạn con thách đố

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> s;

    int res = -1, sum = 0;
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        q.push(a[i]);
        sum += a[i];
        while (sum > s)
        {
            sum -= q.front();
            q.pop();
        }
        if (sum == s)
            res = max(res, (int)q.size());
    }
    cout << res;
    return 0;
}