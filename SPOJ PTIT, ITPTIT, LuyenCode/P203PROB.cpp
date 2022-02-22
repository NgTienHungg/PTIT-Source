// https://www.spoj.com/PTIT/problems/P203PROB/
// P203PROB - Tổng ước số nguyên tố

#include <bits/stdc++.h>

using namespace std;

vector<int> mp(1e7 + 1, 0); // mp: min prime
void eratosthenes()
{
    for (int i = 2; i * i <= 1e7; i++)
        if (mp[i] == 0)
            for (int j = i; j <= 1e7; j += i)
                if (mp[j] == 0)
                    mp[j] = i;
    for (int i = 2; i <= 1e7; i++)
        if (mp[i] == 0)
            mp[i] = i;
}

int PhanTich(int n)
{
    int res = 0;
    while (n != 1)
    {
        res += mp[n];
        n /= mp[n];
    }
    return res;
}

int main()
{
    eratosthenes();
    int n, x;
    cin >> n;
    int res = 0;
    while (n--)
    {
        cin >> x;
        res += PhanTich(x);
    }
    cout << res;
    return 0;
}
