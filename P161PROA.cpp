// https://www.spoj.com/PTIT/problems/P161PROA/
// P161PROA - ROUND 1A - Số gần nguyên tố

#include <bits/stdc++.h>
using namespace std;

bool ktnt(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        long long x = sqrt(v[i]);
        if (ktnt(x) && x * x == v[i])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

// Số có 3 ước thì là số chính phương và căn bậc 2 của nó là số nguyên tố