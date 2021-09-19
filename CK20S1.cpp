// https://code.itptit.com/problems/100016
// Thực hiện tốt các chỉ đạo phòng, chống dịch bệnh COVID–19 của chính phủ và nhà nước!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }
    int x = m / n;
    int count = 0;
    for (int i = 2; i <= 3; ++i)
    {
        while (x % i == 0)
        {
            count++;
            x /= i;
        }
    }
    if (x != 1)
        cout << -1;
    else
        cout << count;
    return 0;
}