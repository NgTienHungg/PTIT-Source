// https://www.spoj.com/PTIT/problems/PTIT128E/
// PTIT128E - Khóa tổ hợp

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int b, int c)
{
    /* Step 1 */
    int res = 2 * n + (n - 1);

    /* Step 2 */
    res += n;
    if (b > a)
        res += b - a;
    else
        res += n - (a - b);

    /* Step 3 */
    if (c > b)
        res += n - (c - b);
    else
        res += b - c;

    cout << res << endl;
}

int main()
{
    int n, a, b, c;
    while (1)
    {
        cin >> n >> a >> b >> c;
        if (n == 0 && a == 0 && b == 0 && c == 0)
            break;
        solve(n, a, b, c);
    }
    return 0;
}

/* Quay theo chiều nào thì bước đó chỉ quay theo chiều đó */