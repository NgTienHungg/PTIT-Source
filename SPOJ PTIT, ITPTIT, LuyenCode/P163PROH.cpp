// https://www.spoj.com/PTIT/problems/P163PROH/
// P163PROH - ROUND 3H - Vẽ đa giác

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        bool kt = false;
        ll g = 180, n = 3;
        int dem = 50000;
        while (dem--)
        {
            if (g == n * a)
            {
                kt = true;
                break;
            }
            g += 180;
            n++;
        }
        if (kt == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}