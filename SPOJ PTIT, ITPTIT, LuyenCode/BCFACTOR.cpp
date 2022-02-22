// https://www.spoj.com/PTIT/problems/BCFACTOR/
// BCFACTOR - Phân tích ra thừa số nguyên tố (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int d = 0;
        while (n % i == 0)
        {
            d++;
            n /= i;
        }
        if (d > 0)
            cout << i << " " << d << endl;
        if (n == 1)
            return 0;
    }
    cout << n << " 1";
}