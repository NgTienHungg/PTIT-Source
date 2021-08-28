// https://luyencode.net/problem/CB04
// CB04 - Tính tổng, hiệu, tích, thương của 2 số nguyên

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    b == 0 ? printf("INF") : printf("%.2lf", (double)a / b);
    return 0;
}