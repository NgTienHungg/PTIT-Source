// https://code.ptit.edu.vn/student/question/CP01006
// DÃY CON LIÊN TIẾP

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    long long a[n];
    long long maxx = -1e9;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    if (maxx <= 0)
        cout << maxx << endl;
    else
    {
        long long sum = 0;
        maxx = a[0];
        for (int i = 0; i < n; ++i)
        {
            if (sum + a[i] >= 0)
            {
                sum += a[i];
                maxx = max(maxx, sum);
            }
            else
                sum = 0;
        }
        cout << maxx << endl;
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