// https://code.ptit.edu.vn/student/question/CPP0126
// LIỆT KÊ SỐ NGUYÊN TỐ - 2

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<bool> v(1e4 + 1, 1);
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i <= 100; ++i)
    {
        if (v[i])
        {
            for (int j = i * i; j <= 1e4; j += i)
                v[j] = 0;
        }
    }
}

void TestCase()
{
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; ++i)
    {
        if (v[i])
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    eratosthenes();
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}