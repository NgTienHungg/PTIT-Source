// https://www.spoj.com/PTIT/problems/CPPPRI11/
// CPPPRI11 - PRIME 11

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Pow(int x, int y)
{
    ll res = 1;
    for (int i = 1; i <= y; i++)
        res *= x;
    return res;
}

// Vector chứa các số hoàn hảo >=1 && <=1e18
vector<ll> v = {6, 28, 496, 8128, 33550336, 8589869056};
void perfectNumber()
{
    ll x = Pow(2, 18) * (Pow(2, 19) - 1);
    v.push_back(x);
}

void solve()
{
    ll n;
    cin >> n;
    bool check = 0;
    for (int i = 0; i < v.size(); i++)
        if (n == v[i])
        {
            check = 1;
            break;
        }
    if (check == 1)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main()
{
    perfectNumber();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

// Thuyết Euclid-Euler: Số hoàn hảo = 2^(n-1) * (2^n - 1)
// Với (2^n - 1) là số nguyên tố
// n = {2, 3, 5, 7, 13, 17, 19, 31, 61, 89, ...}