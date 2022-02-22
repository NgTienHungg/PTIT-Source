// https://www.spoj.com/PTIT/problems/PTIT136H/
// PTIT136H - Sắp xếp dãy số

#include <bits/stdc++.h>
using namespace std;

int Find(int a[], int n, int x)
{
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == x)
            return i;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int minn = 1, maxx = n;
    for (int i = 1; i <= n; ++i)
    {

        if (i % 2 == 1)
        {
            int pos = Find(a, n, minn);
            cout << pos - minn << endl;

            for (int j = pos; j > minn; --j)
                a[j] = a[j - 1];
            a[minn] = minn;
            minn++;
        }
        else
        {
            int pos = Find(a, n, maxx);
            cout << maxx - pos << endl;

            for (int j = pos; j < maxx; ++j)
                a[j] = a[j + 1];
            a[maxx] = maxx;
            maxx--;
        }
    }
    return 0;
}