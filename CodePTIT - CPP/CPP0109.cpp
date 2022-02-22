// https://code.ptit.edu.vn/student/question/CPP0109
// CÂN BẰNG CHẴN LẺ

#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    int e = 0, o = 0;
    while (n > 0)
    {
        int x = n % 10;
        if (x % 2 == 0)
            e++;
        else
            o++;
        n /= 10;
    }
    return e == o;
}

int main()
{
    int n;
    cin >> n;
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    int d = 0;
    for (int i = l; i <= r; ++i)
    {
        if (check(i))
        {
            cout << i << " ";
            d++;
            if (d == 10)
                cout << endl;
            d %= 10;
        }
    }
    return 0;
}