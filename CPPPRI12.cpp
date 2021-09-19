// https://www.spoj.com/PTIT/problems/CPPPRI12/
// CPPPRI12 - PRIME 12

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> uoc = {};
    int x = sqrt(n);
    for (int i = 2; i <= x; i++)
    {
        while (n % i == 0)
        {
            uoc.push_back(i);
            n /= i;
        }
        if (n == 1)
            break;
    }
    if (n != 1)
        uoc.push_back(n);
    if (uoc.size() < k)
        cout << "-1\n";
    else
        cout << uoc[k - 1] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}