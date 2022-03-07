// https://www.spoj.com/PTIT/problems/PTIT127C/
// PTIT127C - Bố trí phòng họp

#include <bits/stdc++.h>
using namespace std;

struct Meeting
{
    int s;
    int f;
};

int n;
vector<Meeting> v(10005);

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i].s >> v[i].f;
}

void sort()
{
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[j].f < v[i].f)
                swap(v[i], v[j]);
}

int solve()
{
    int x = v[1].s;
    int res = 0;
    for (int i = 1; i <= n; i++)
        if (x <= v[i].s)
        {
            res++;
            x = v[i].f;
        }
    return res;
}

int main()
{
    init();
    sort();
    cout << solve();
    return 0;
}