// https://www.spoj.com/PTIT/problems/P205PROI/
// P205PROI - Truy vấn trên mảng

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll limitElement = 1e6 + 12;

ll n, q, l, r;
vector<ll> v(limitElement);

void init()
{
    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
}

int main()
{
    init();
    while (q--)
    {
        cin >> l >> r;
        vector<ll>::iterator low, up;
        low = lower_bound(v.begin(), v.end(), l);
        up = upper_bound(v.begin(), v.end(), r);
        cout << up - low << endl;
    }
    return 0;
}