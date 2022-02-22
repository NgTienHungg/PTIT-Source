// https://www.spoj.com/PTIT/problems/P161SUMI/
// P161SUMI - ROUND 1I - Card game

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> dd(127, 0);
    for (int i = 0; i < n; i++)
        dd[s[i]]++;

    sort(dd.rbegin(), dd.rend());
    long long sum = 0;
    for (int i = 0; i < 127; i++)
    {
        if (k - dd[i] <= 0)
        {
            sum += pow(k, 2);
            break;
        }
        sum += pow(dd[i], 2);
        k -= dd[i];
    }
    cout << sum;
    return 0;
}