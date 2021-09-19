// https://code.ptit.edu.vn/student/question/CPP0118
// SỐ SPHENIC

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                v.push_back(i);
                n /= i;
            }
        }
        if (n == 1)
            break;
    }
    if (n > 1)
        v.push_back(n);
    if (v.size() == 3 && v[0] != v[1] && v[1] != v[2])
        cout << "1\n";
    else
        cout << "0\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}