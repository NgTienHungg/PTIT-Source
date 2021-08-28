// https://luyencode.net/problem/VL20
// VL20 - In ra các chữ cái

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
        cout << char(i - 'a' + 'A') << " ";
    return 0;
}