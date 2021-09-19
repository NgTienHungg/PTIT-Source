// https://www.spoj.com/PTIT/problems/P195SUMA/
// P195SUMA - Số nguyên dương nhỏ nhất

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (k == n)
        cout << v[n - 1];
    else if (k == 0)
    {
        if (v[0] == 1)
            cout << "-1";
        else
            cout << "1";
    }
    else if (v[k] == v[k - 1])
        cout << "-1";
    else
        cout << v[k - 1];
    return 0;
}