// https://luyencode.net/problem/PROD
// PROD - PRODUCT

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a * b == 0)
        cout << 0;
    else if (a * b > 0)
        cout << 1;
    else
        cout << -1;
    return 0;
}