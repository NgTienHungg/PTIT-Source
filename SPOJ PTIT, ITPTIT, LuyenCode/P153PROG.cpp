// https://www.spoj.com/PTIT/problems/P153PROG/
// P153PROG - ROUND 3G - Chẵn lẻ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll odd = (ll)(n - 1) / 2 + 1; // Số lượng số lẻ
    ll even = n - odd;            // Số lượng số chẵn
    if (k <= odd)
        cout << k * 2 - 1;
    else
        cout << (k - odd) * 2;
    return 0;
}