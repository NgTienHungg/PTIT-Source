// https://www.spoj.com/PTIT/problems/P163SUMA/
// P163SUMA - ROUND 3A - Bài Even

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    s.resize(n);
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