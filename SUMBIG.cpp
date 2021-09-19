// https://luyencode.net/problem/SUMBIG
// SUMBIG - Tính tổng 2 số nguyên lớn

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    if (a.length() < b.length())
        a.insert(0, b.length() - a.length(), '0');
    if (b.length() < a.length())
        b.insert(0, a.length() - b.length(), '0');

    string res = "";
    int remember = 0;
    for (int i = a.length() - 1; i >= 0; --i) {
        int digit = (a[i] - '0') + (b[i] - '0') + remember;
        res = char(digit % 10 + '0') + res;
        remember = digit / 10;
    }
    if (remember > 0)
        res = '1' + res;
    cout << res;
    return 0;
}