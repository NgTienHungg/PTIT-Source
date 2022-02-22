// https://www.spoj.com/PTIT/problems/P181PROH/
// P181PROH - ROUND 1H - Ai thông minh hơn học sinh lớp 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "infinity";
        return 0;
    }
    else if (a < b)
    {
        cout << 0;
        return 0;
    }
    int n = a - b; // x * k = a - b
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (a % i == b)
                count++;
            if (a % (n / i) == b)
                count++;
            if (i * i == n) // n chính phương
                count--;
        }
    }
    cout << count;
    return 0;
}