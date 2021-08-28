// https://www.spoj.com/PTIT/problems/P17QPROC/
// P17QPROC - QUALIFY ROUND 2017 C - SỐ KHÔNG HOÀN HẢO

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> v(1e7 + 1, 1);
vector<ll> as(1e7 + 1, 0); // as = aswer

void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i <= 1e7; i++)
        for (int j = 2 * i; j <= 1e7; j += i)
            v[j] += i;

    for (int i = 1; i <= 1e7; i++)
    {
        as[i] = abs(i - v[i]);
        as[i] += as[i - 1];
    }
}

int main()
{
    eratosthenes();
    int a, b;
    cin >> a >> b;
    ll sum = 0;
    cout << ll(as[b] - as[a - 1]);
    return 0;
}

// v() là vector tổng ước nhỏ hơn chính nó của các số
// as() là vector tính F(i) = abs(i - v[i])
// Cộng dồn as()