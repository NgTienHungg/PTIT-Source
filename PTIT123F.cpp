// https://www.spoj.com/PTIT/problems/PTIT123F/
// PTIT123F - Người cai ngục say rượu

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<bool> v(n + 1, 0); // False = Khóa, True = Mở
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j += i)
        {
            if (v[j])
                v[j] = 0; // Nếu đang Mở => Khóa
            else
                v[j] = 1; // Khóa => Mở
        }
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (v[i])
            count++;
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}