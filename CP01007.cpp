// https://code.ptit.edu.vn/student/question/CP01007
// SỐ ĐỨNG ĐẦU

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
            cout << a[i] << endl;
        else
        {
            bool ok = 1;
            for (int j = i + 1; j < n; ++j)
            {
                if (a[j] >= a[i])
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
                cout << a[i] << " ";
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