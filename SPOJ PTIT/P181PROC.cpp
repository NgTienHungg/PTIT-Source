// https://www.spoj.com/PTIT/problems/P181PROC/
// P181PROC - ROUND 1C - Bái thầy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long minPrime = n;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            minPrime = i;
            break;
        }
    }
    if (k <= minPrime)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

// Tìm Prime nhỏ nhất, các số k < minPrime sẽ t/m