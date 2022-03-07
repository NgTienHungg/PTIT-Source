// https://www.spoj.com/PTIT/problems/BCPNA/
// BCPNA - Lại là số nguyên tố

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e6 + 1, 1);
vector<int> prime = {};
void isPrime()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= 1e6; i++)
        if (v[i])
            for (int j = i * i; j <= 1e6; j += i)
                v[j] = 0;
    for (int i = 0; i <= 1e6; i++)
        if (v[i])
            prime.push_back(i);
}

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    int i = 0;
    while (prime[i] <= n)
    {
        int sum = 0;
        for (int j = i;; j++)
        {
            sum += prime[j];
            if (sum == n)
                count++;
            else if (sum > n)
                break;
        }
        i++;
    }
    cout << count << endl;
}

int main()
{
    isPrime();
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}