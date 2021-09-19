// https://www.spoj.com/PTIT/problems/BCTEST14/
// BCTEST14 - Ốc sên

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, v;
    cin >> a >> b >> v;
    // v <= k * (a - b) + b
    double x = (double)(v - b) / (a - b);
    long long k = (long long)ceil(x);
    cout << k;
    return 0;
}