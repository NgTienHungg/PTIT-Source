// https://www.spoj.com/PTIT/problems/P197PROJ/
// P197PROJ - Problem J - Dãy bằng nhau

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) { return a > b; }

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i] == b[j])
            {
                a[i] = b[j] = 0;
                break;
            }
        }
    }
    
    sort(a, a + n, cmp);
    sort(b, b + n, cmp);
    int x = a[0], y = b[0];
    if (a[1] != 0 || b[1] != 0)
        cout << "NO";
    else
    {
        if (abs(x - y) <= k)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}