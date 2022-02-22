// https://luyencode.net/problem/SUM3
// SUM3 - Tính tổng phiên bản 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double r = 1 - 1.0 / (n + 1);
    cout << setprecision(5) << fixed << r;
    return 0;
}