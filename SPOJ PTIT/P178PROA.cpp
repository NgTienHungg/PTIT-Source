// https://www.spoj.com/PTIT/problems/P178PROA/
// P178PROA - ROUND 8A - THUẾ THU NHẬP

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        if (n <= 1e6)
            cout << n << endl;
        else if (n > 1e6 && n <= 5e6)
            cout << ll(n * 0.9) << endl;
        else
            cout << ll(n * 0.8) << endl;
    }
    return 0;
}