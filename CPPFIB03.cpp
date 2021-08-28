// https://www.spoj.com/PTIT/problems/CPPFIB03/
// CPPFIB03 - FIBONACCI 3

#include <bits/stdc++.h>
using namespace std;

vector<bool> f(1001, 0); // Mảng đánh dấu số Fibonacci <= 1000
void fibonacci()
{
    f[0] = f[1] = 1;
    int a = 0, b = 1, x;
    while (1)
    {
        x = a + b;
        a = b;
        b = x;
        if (x > 1000)
            break;
        f[x] = 1;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        if (f[v[i]])
            cout << v[i] << " ";
    cout << endl;
}

int main()
{
    fibonacci();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}