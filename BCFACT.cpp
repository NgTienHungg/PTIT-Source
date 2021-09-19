// https://www.spoj.com/PTIT/problems/BCFACT/
// BCFACT - Giai thừa (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

long long gt(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * gt(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        cout << gt(n) << endl;
    }
    return 0;
}