// https://code.itptit.com/problems/100031
// Thằng em Gen Z học CNTT PTIT

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    int pos1 = 0, posN = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 1)
            pos1 = i;
        if (a[i] == n)
            posN = i;
    }

    vector<int> v;
    if (pos1 < posN)
    {
        v.push_back(posN + 1);
        v.push_back(n - pos1);
        v.push_back(pos1 + 1 + n - posN);
    }
    else
    {
        v.push_back(pos1 + 1);
        v.push_back(n - posN);
        v.push_back(posN + 1 + n - pos1);
    }

    sort(v.begin(), v.end());
    cout << v[0] << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}