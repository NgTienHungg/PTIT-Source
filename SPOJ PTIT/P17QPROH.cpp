// https://www.spoj.com/PTIT/problems/P17QPROH/
// P17QPROH - QUALIFY ROUND 2017 H - TÍCH VÔ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (long long)a[i] * b[i];
        }
        cout << "Case #" << t << ": " << sum << endl;
    }
    return 0;
}