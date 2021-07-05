// https://www.spoj.com/PTIT/problems/SSAM019H/
// SSAM019H - SỐ FIBONACCI THỨ N


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

vector<int> f(1e6);
void fibonacci()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 1e6; i++)
        f[i] = (f[i - 1] + f[i - 2]) % mod;
}

void solve()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
}

int main()
{
    fibonacci();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}