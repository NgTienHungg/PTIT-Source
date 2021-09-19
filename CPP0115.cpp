// https://code.ptit.edu.vn/student/question/CPP0115
// PHÂN TÍCH THỪA SỐ NGUYÊN TỐ - 1

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            int d = 0;
            while (n % i == 0)
            {
                d++;
                n /= i;
            }
            cout << i << " " << d << " ";
        }
        if (n == 1)
            break;
    }
    if (n > 1)
        cout << n << " 1";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}