// https://code.ptit.edu.vn/student/question/CPP0130
// ƯỚC SỐ NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        if (n == 1)
            break;
    }
    if (n > 1)
        cout << n;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
