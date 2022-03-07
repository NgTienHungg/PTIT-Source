// https://www.spoj.com/PTIT/problems/P204PROB/
// P204PROB - Tính tổng Dãy Số

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << n / 2 - n;
    return 0;
}