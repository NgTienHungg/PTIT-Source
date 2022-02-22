// https://code.ptit.edu.vn/student/question/CPP0134
// ƯỚC SỐ NGUYÊN TỐ THỨ K

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
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
    if (k > v.size())
        cout << "-1\n";
    else
        cout << v[k - 1] << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}