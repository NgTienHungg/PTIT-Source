// https://www.spoj.com/PTIT/problems/P155SUMD/
// P155SUMD - ROUND 5D - Chỉ là sắp xếp

#include <bits/stdc++.h>
using namespace std;

int bsearch(int *a, int l, int r, int kt)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] <= kt)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    for (int i = 0; i < m; i++)
    {
        if (b[i] < a[0])
        {
            cout << "0\n";
            continue;
        }

        cout << bsearch(a, 0, n - 1, b[i]) + 1 << endl;
    }
    return 0;
}