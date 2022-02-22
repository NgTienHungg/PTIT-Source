// https://www.spoj.com/PTIT/problems/P193PROD/
// P193PROD - Problem D - Chia quả dưa hấu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 2; i <= n / 2; i += 2)
    {
        if ((n - i) % 2 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}