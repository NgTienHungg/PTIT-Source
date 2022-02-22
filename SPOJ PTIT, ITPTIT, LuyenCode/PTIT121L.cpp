// https://www.spoj.com/PTIT/problems/PTIT121L/
// PTIT121L - Ghép hình

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Rectangle
{
    ll len;
    ll wid;
    ll area;
};

ll MAX(ll a, ll b, ll c)
{
    ll max = a;
    if (a < b)
        max = b;
    if (b < c)
        max = c;
    return max;
}

int main()
{
    vector<Rectangle> hcn(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> hcn[i].len >> hcn[i].wid;
        if (hcn[i].len < hcn[i].wid)
            swap(hcn[i].len, hcn[i].wid);
        hcn[i].area = hcn[i].len * hcn[i].wid;
    }
    ll Max = MAX(hcn[0].len, hcn[1].len, hcn[2].len);
    if ((hcn[0].area + hcn[1].area + hcn[2].area) == Max * Max)
        cout << Max;
    else
        cout << 0;
    return 0;
}