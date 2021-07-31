#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> x;

    for (int i = 0; i < n; ++i)
    {
        if (x <= a[i])
        {
            cout << x << " ";
            x = 1e5;
        }
        cout << a[i] << " ";
    }
    if (x != 1e5)
        cout << x;
    return 0;
}