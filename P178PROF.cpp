// https://www.spoj.com/PTIT/problems/P178PROF/
// P178PROF - ROUND 8F - DÃY HAILSTONE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        vector<int> v;
        v.push_back(n);
        while (1)
        {
            if (n == 1)
                break;
            if (n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
            v.push_back(n);
        }
        cout << v.size() << endl;
    }

    return 0;
}