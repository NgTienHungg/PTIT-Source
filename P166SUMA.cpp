// https://www.spoj.com/PTIT/problems/P166SUMA/
// P166SUMA - ROUND 6A - Captain Boomerang

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> dd(5001, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        dd[v[i]] = 1;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (!dd[i])
            count++;
    cout << count;
    return 0;
}