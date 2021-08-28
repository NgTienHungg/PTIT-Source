// https://www.spoj.com/PTIT/problems/P182PROA/
// P182PROA - ROUND 2A - Cuốn ngôn tình đầu tiên

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;
    int count = 1;
    int s = v0;

    // Tính từ ngày thứ 2 trở đi
    while (s < c)
    {
        s -= l;
        if (v0 + a <= v1)
            v0 += a;
        else
            v0 = v1;
        s += v0;
        count++;
    }
    cout << count;
    return 0;
}