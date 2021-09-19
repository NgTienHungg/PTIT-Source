// https://code.itptit.com/problems/100029
// Đầu tư

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    for (int i = 1; i <= 7; ++i)
        n *= 1.12;
    printf("%.0lf", n);
    return 0;
}