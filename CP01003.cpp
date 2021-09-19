// https://code.ptit.edu.vn/student/question/CP01003
// SỐ THUẦN NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

bool snt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

bool cs(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int mod = n % 10;
        if (mod != 2 && mod != 3 && mod != 5 && mod != 7)
            return 0;
        sum += mod;
        n /= 10;
    }
    if (snt(sum))
        return 1;
    return 0;
}

void TestCase()
{
    int a, b, res = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
    {
        if (cs(i) && snt(i))
            res++;
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