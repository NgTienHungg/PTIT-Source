// https://www.spoj.com/PTIT/problems/PTIT017A/
// PTIT017A - ACM PTIT 2017 A - ƯỚC SỐ NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e7 + 1, 1);
vector<int> p(1e7 + 1, 0);

void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i <= 1e7; i++)
    {
        if (v[i])
        {
            p[i]++;
            for (int j = 2 * i; j <= 1e7; j += i)
            {
                p[j]++;
                v[j] = 0;
            }
        }
    }
}

int main()
{
    eratosthenes();
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int a, b, k;
        cin >> a >> b >> k;
        printf("Case #%d: ", t);
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (p[i] == k)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}