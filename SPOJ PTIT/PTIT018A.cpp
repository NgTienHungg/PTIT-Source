// https://www.spoj.com/PTIT/problems/PTIT018A/
// PTIT018A - ACM PTIT 2018 A - CẶP SỐ NGUYÊN TỐ ĐẶC BIỆT

#include <bits/stdc++.h>
#define max 1e6 + 7
using namespace std;

vector<bool> v(max + 1, 1);
vector<int> p(max + 1, 0);

void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= max; i++)
    {
        if (v[i])
        {
            for (int j = i * i; j <= max; j += i)
                v[j] = 0;
        }
    }

    for (int i = 2; i <= 1e6; i++)
    {
        if (v[i] == 1 && v[i + 6] == 1)
            p[i] = p[i - 1] + 1;
        else
            p[i] = p[i - 1];
    }
}

void solve()
{
    int l, r;
    cin >> l >> r;
    cout << p[r - 6] - p[l - 1] << endl;
}

int main()
{
    eratosthenes();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}