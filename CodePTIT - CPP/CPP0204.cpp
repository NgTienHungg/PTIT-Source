// https://code.ptit.edu.vn/student/question/CPP0204
// ĐẾM SỐ NGUYÊN TỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v(1e5 + 1, 1);
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i <= sqrt(1e5); ++i)
    {
        if (v[i])
        {
            for (int j = i * i; j <= 1e5; j += i)
                v[j] = 0;
        }
    }
    for (int i = 2; i <= 1e5; ++i)
        v[i] += v[i - 1];
}

void TestCase()
{
    int l, r;
    cin >> l >> r;
    cout << v[r] - v[l - 1] << endl;
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