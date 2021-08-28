// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/R
// R. Harmony

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<long long> len(51);
void pretreatment()
{
    len.push_back(1);
    for (int i = 1; i <= 50; ++i)
        len[i] = len[i - 1] * 2 + 1;
}

int findIndex(long long n)
{
    for (int i = 1; i <= 50; ++i) {
        if (len[i] >= n) return i;
    }
}

bool isOne(long long vt, int id, long long n)
{
    long long mid = len[id] / 2 + 1;
    if (vt == mid) return n % 2;
    if (vt < mid) return isOne(vt, id - 1, n / 2);
    return isOne(vt - mid, id - 1, n / 2);
}

void TestCase()
{
    long long n, l, r;
    cin >> n >> l >> r;
    int d = 0;
    for (long long i = l; i <= r; ++i) {
        if (isOne(i, findIndex(n), n)) d++;
    }
    cout << d << endl;
}

int main()
{
    pretreatment();
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}