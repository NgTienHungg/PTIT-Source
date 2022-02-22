// https://www.spoj.com/PTIT/problems/P165SUMI/
// P165SUMI - ROUND 5I - Cộng trừ


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << n / 2 - n;
    return 0;
}