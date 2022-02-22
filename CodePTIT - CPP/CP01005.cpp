// https://code.ptit.edu.vn/student/question/CP01005
// TẦN SUẤT LẺ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int d[1000001];

void TestCase()
{
    memset(d, 0, sizeof(d));
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d[x]++;
    }
    for (int i = 1; i <= 1e6; ++i)
    {
        if (d[i] > 0 && d[i] % 2 == 1)
        {
            cout << i << endl;
            return;
        }
    }
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