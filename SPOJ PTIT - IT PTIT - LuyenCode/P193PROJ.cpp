// https://www.spoj.com/PTIT/problems/P193PROJ/
// P193PROJ - Problem J - Tam Giác

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;    // a = rộng, b = dài
    int x, y, z; // x, y, z có độ dài lần lượt tăng dần
    cin >> a >> b >> x >> y >> z;
    if (a > b)
        swap(a, b);
    if (x > y)
        swap(x, y);
    if (x > z)
        swap(x, z);
    if (y > z)
        swap(y, z);

    if (x <= a && y <= b && x * x + y * y == z * z)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}