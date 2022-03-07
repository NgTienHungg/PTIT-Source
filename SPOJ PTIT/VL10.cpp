// https://luyencode.net/problem/VL10
// VL10 - Đếm số lượng chữ số của số n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n[0] != '-')
        cout << n.length();
    else
        cout << n.length() - 1;
    return 0;
}