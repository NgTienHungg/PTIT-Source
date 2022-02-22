// https://www.spoj.com/PTIT/problems/BCCAITUI/
// BCCAITUI - Cái Túi

#include <bits/stdc++.h>
using namespace std;

int n, M;

struct Data
{
    int wei;
    int val;
} a[105];

bool cmp(Data a, Data b)
{
    return (double)a.val / a.wei > (double)b.val / b.wei;
}

int Try(int i, int W, int V)
{
    if (W > M)
        return 0;
    if (i == n && W <= M)
        return V;
    int x = Try(i + 1, W + a[i].wei, V + a[i].val);
    int y = Try(i + 1, W, V);
    return max(x, y);
}

int main()
{
    cin >> n >> M;
    for (int i = 0; i < n; i++)
        cin >> a[i].wei >> a[i].val;

    sort(a, a + n, cmp);
    cout << Try(0, 0, 0);
    return 0;
}