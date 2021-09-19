// https://www.spoj.com/PTIT/problems/P143PROG/
// P143PROG - ROUND 3G - Chia kẹo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int x = k / (n - 1); // Số kẹo ít nhất 1 đứa em đang có
    if (k % (n - 1) == 0)
        cout << k + x - 1 << " " << k + x;
    else
        cout << k + x << " " << k + x;
    return 0;
}