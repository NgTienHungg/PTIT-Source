// https://code.ptit.edu.vn/student/question/CP04012
// GIÁ TRỊ NHỎ NHẤT CỦA XÂU

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(int a, int b) { return a > b; }

void TestCase()
{
    int k;
    cin >> k;
    string s;
    cin >> s;

    int d[27] = {0};
    for (auto c : s)
        d[c - 'A']++;
    sort(d, d + 27, cmp);

    while (k--)
    {
        d[0]--;
        sort(d, d + 27, cmp);
    }

    long long res = 0;
    for (int i = 0; i < 27; ++i)
    {
        if (d[i] == 0)
            break;
        res += (long long)d[i] * d[i];
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}