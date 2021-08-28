// https://www.spoj.com/PTIT/problems/SSAM019L/
// SSAM019L - CHIA TAM GIÁC

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double n, h;
    cin >> n >> h;
    for (int i = 1; i < n; i++)
    {
        printf("%.6lf ", (double)h * sqrt((double)i / n));
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}