// https://www.spoj.com/PTIT/problems/P179PROA/
// P179PROA - ROUND 9A - TIẾN HÓA POKEMON

#include <bits/stdc++.h>
using namespace std;

struct Pokemon
{
    string species;
    int need;
    int have;
    int times;
};

void inPut(Pokemon p[], int i, int &count, int &max, int &pos)
{
    cin >> p[i].species >> p[i].need >> p[i].have;
    p[i].times = 0;
    while (p[i].have >= p[i].need)
    {
        p[i].times += p[i].have / p[i].need;
        p[i].have = p[i].have % p[i].need + 2 * (p[i].have / p[i].need);
    }
    if (p[i].times > max)
    {
        max = p[i].times;
        pos = i;
    }
    count += p[i].times;
}

int main()
{
    int n;
    cin >> n;
    Pokemon p[n];
    int count = 0, max = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        inPut(p, i, count, max, pos);
    }
    cout << count << endl
         << p[pos].species;
    return 0;
}