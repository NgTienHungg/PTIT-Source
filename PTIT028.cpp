// https://luyencode.net/problem/PTIT028
// PTIT028 - Làm tròn số

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x;
    cin >> x;
    int a = floor(x);
    int b = ceil(x);
    if (a == b)
        b += 1;
    cout << a << " " << b;
    return 0;
}