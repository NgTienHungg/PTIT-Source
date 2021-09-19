// https://www.spoj.com/PTIT/problems/P166PROH/
// P166PROH - ROUND 6H - Số gần nguyên tố

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(3001, 1);

void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i <= 3000; i++)
        if (v[i])
            for (int j = i * i; j <= 3000; j += i)
                v[j] = 0;
}

bool check(int n)
{
    int dem = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && v[i])
            dem++;
        if (dem > 2)
            return 0;
    }
    if (dem == 2)
        return 1;
    return 0;
}

int main()
{
    eratosthenes();
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++)
        if (check(i))
            count++;
    cout << count;
    return 0;
}