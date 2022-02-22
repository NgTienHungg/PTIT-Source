// https://code.ptit.edu.vn/student/question/CP04011
// SỐ NHỎ NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int s, d;
    cin >> s >> d;
    if (s > d * 9)
    {
        cout << "-1\n";
        return;
    }
    // init N = 100..00
    vector<int> v(d, 0);
    v.front() = 1, s--;
    for (int i = d - 1; i >= 0; --i)
    {
        if (v[i] + s <= 9)
        {
            v[i] += s;
            break;
        }
        s -= (9 - v[i]);
        v[i] = 9;
    }
    for (auto x : v)
        cout << x;
    cout << endl;
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