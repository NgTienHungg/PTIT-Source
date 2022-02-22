// https://www.spoj.com/PTIT/problems/P147PROA/
// P147PROA - ROUND 7A - Hình hộp chữ nhật

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int x = sqrt((A * B) / C);
    cout << 4 * (x + A / x + B / x);
    return 0;
}