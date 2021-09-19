// https://code.ptit.edu.vn/student/question/CPP0173
// CHIA HẾT CHO BA SỐ NGUYÊN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long LL;

LL gcd(LL a, LL b)
{
    while (b > 0)
    {
        LL x = a % b;
        a = b;
        b = x;
    }
    return a;
}

LL lcm(LL a, LL b)
{
    return a * b / gcd(a, b);
}

void TestCase()
{
    LL x, y, z, n;
    cin >> x >> y >> z >> n;
    LL l = pow(10, n - 1);
    LL r = pow(10, n) - 1;
    LL bc = lcm(lcm(x, y), z);
    if (bc > r)
        cout << "-1\n";
    else if (l % bc == 0)
        cout << l << endl;
    else
    {
        LL d = l / bc;
        cout << bc * (d + 1) << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}