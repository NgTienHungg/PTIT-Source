// https://code.ptit.edu.vn/student/question/CPP0206
// PHẦN TỬ LỚN NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[n - 1] << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}