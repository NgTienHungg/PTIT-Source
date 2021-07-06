// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/J
// J. BINARY Trên tập số thực

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
typedef double db;

int n, k;
vector<db> v;
db res, sum = 0;

void init()
{
    scanf("%d %d", &n, &k);
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
        sum += v[i];
    }
}

bool kt(db x)
{
    db s = 0;
    for (int i = 0; i < v.size(); i++)
        if (v[i] < x)
            s += ((x - v[i]) / (1 - (db)k / 100)) * (db)k / 100;
    return (s + x * n <= sum);
}

void bs(db l, db r)
{
    if (l > r)
        return;
    if (l == r || r - l < 0.0000001)
    {
        if (kt(l))
            res = l;
        if (kt(r))
            res = r;
        return;
    }
    db tmp = (l + r) / 2;
    if (kt(tmp))
    {
        res = tmp;
        bs(tmp, r);
    }
    else
        bs(l, tmp);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    init();
    sort(v.begin(), v.end());
    bs(0, v.back());
    printf("%.6lf", res);
    return 0;
}

//! Hard