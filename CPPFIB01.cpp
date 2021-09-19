// https://www.spoj.com/PTIT/problems/CPPFIB01/
// CPPFIB01 - FIBONACCI 1

#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

vector<int> f(1001);
void fibonacci()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 1000; i++)
        f[i] = (f[i - 1] + f[i - 2]) % mod;
}

int main()
{
    fibonacci();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}
