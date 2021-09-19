// https://code.ptit.edu.vn/student/question/CPP0124
// PHÂN TÍCH THỪA SỐ NGUYÊN TỐ - 2

#include <bits/stdc++.h>
using namespace std;

int main()
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
            cout << i << " " << d << endl;
        }
        if (n == i)
            break;
    }
    if (n > 1)
        cout << n << " 1\n";
    return 0;
}