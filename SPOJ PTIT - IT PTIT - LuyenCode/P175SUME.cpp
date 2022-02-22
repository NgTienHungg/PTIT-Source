// https://www.spoj.com/PTIT/problems/P175SUME/
// P175SUME - ROUND 5E - Trò chơi với queue

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = 1;
    while (n > 5 * d)
    {
        n -= 5 * d;
        d *= 2;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if (n <= d)
        {
            cout << i;
            return 0;
        }
        n -= d;
    }
    return 0;
}