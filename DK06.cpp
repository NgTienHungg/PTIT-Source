// https://luyencode.net/problem/DK06
// DK06 - Giải phương trình bậc nhất 1 ẩn

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0 && b != 0)
        cout << "NO";
    else if (a == 0 && b == 0)
        cout << "INF";
    else
        printf("%.2lf", (double)-b / a);
    return 0;
}