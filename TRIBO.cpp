// https://luyencode.net/problem/TRIBO
// TRIBO - Dãy số Tribonacci

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<long long> f(3);
        f[0] = f[1] = 0, f[2] = 1;
        for (int i = 0;; ++i)
        {
            if (i >= 3)
                f.push_back(f[i - 1] + f[i - 2] + f[i - 3]);
            if (f[i] >= n)
            {
                cout << f[i] << endl;
                break;
            }
        }
    }
    return 0;
}