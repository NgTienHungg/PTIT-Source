// https://www.spoj.com/PTIT/problems/P152PROB/
// P152PROB - ROUND 2B - Phân nhóm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int d = 1;

    for (int i = 1; i < n; i++)
        if (a[i] - a[i - 1] > k)
            d++;

    cout << d;
    return 0;
}

//? n = 0