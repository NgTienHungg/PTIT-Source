// https://www.spoj.com/PTIT/problems/P194PROD/
// P194PROD - Problem D - Chia cắt

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);

    int a, b;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            a = i;
        if (v[i] == n)
            b = i;
    }

    if (n == 0 || n == 1)
    {
        cout << 0;
        return 0;
    }

    if (a < b)
    {
        if (a - 1 > n - b)
            cout << b - 1;
        else
            cout << n - a;
    }
    else
    {
        if (b - 1 > n - a)
            cout << a - 1;
        else
            cout << n - b;
    }
    return 0;
}

// TODO: Chú ý có n = 0 và n = 1