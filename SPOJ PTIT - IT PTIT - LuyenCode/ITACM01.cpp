// https://code.itptit.com/problems/100002
// Xe Bus

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, f, k;
    cin >> a >> b >> f >> k;

    if (b < f || b < a - f || (k >= 2 && b < 2 * (a - f)) || (k >= 3 && b < 2 * f))
    {
        cout << -1;
        return 0;
    }

    int x = b;     // Số xăng hiện tại
    int count = 0; // Số lần đổ xăng
    bool xuoi = 1; // Chiều di chuyển
    while (k > 0)
    {
        if (xuoi)
        {
            x -= f;
            if ((k == 1 && x < a - f) || (k >= 2 && x < 2 * (a - f)))
            {
                x = b;
                count += 1;
            }
            x -= (a - f);
            xuoi = 0;
        }
        else
        {
            x -= a - f;
            if ((k == 1 && x < f) || (k >= 2 && x < 2 * f))
            {
                x = b;
                count += 1;
            }
            x -= f;
            xuoi = 1;
        }
        k -= 1;
    }
    cout << count;
    return 0;
}