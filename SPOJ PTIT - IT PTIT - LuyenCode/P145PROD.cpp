// https://www.spoj.com/PTIT/problems/P145PROD/
// P145PROD - ROUND 5D - Diện tích hình tròn

#include <bits/stdc++.h>
#define pi atan(1) * 4

using namespace std;

int main()
{
    int r;
    cin >> r;
    printf("%.6lf\n", pi * r * r);
    printf("%.6lf", (double)2 * r * r);
    return 0;
}