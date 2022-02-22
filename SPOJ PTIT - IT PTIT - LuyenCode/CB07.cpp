// https://luyencode.net/problem/CB07
// CB07 - Tính chu vi, diện tích hình tròn

#include <iostream>
using namespace std;

int main()
{
    double r;
    cin >> r;
    double pi = 3.14;
    printf("%.3lf %.3lf", 2 * pi * r, pi * r * r);
    return 0;
}