// https://codeforces.com/group/eFlt2UuXYv/contest/337144/problem/B
// B. [Multi D20] Ước số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cou = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            cou += 2;
            if (i * i == n)
                cou--;
        }
    }
    cout << cou;
    return 0;
}