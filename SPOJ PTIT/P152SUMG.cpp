// https://www.spoj.com/PTIT/problems/P152SUMG/
// P152SUMG - ROUND 2G - Số nguyên tố kế tiếp

#include <bits/stdc++.h>
using namespace std;

bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

vector<int> v;
void snt()
{
    for (int i = 2; i <= 50; i++)
        if (ktnt(i))
            v.push_back(i);
}

int main()
{
    snt();
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            if (v[i + 1] == y)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}