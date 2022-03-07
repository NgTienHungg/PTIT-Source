// https://luyencode.net/problem/DT1
// DT1 - Tính diện tích hình

#include <bits/stdc++.h>
using namespace std;
const double pi = acos(0);

int main() {
    int a;
    cin >> a;
    double s = pi * a * a;
    cout << fixed << setprecision(3) << s;
    return 0;
}