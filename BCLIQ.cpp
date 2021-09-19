// http://www.spoj.com/PTIT/problems/BCLIQ/
// BCLIQ - Dãy con tăng dài nhất (bản dễ)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1005];
    a[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int f[1005];
    f[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for (int j = i - 1; j >= 1; j--)
        {

            if (a[i] > a[j])
                f[i] = max(f[i], f[j] + 1);
        }
    }

    int maxx = 1;
    for (int i = 1; i <= n; i++)
        maxx = max(maxx, f[i]);
    cout << maxx;
    return 0;
}

// QHD basic