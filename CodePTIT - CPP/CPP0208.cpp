// https://code.ptit.edu.vn/student/question/CPP0208
// PHẦN TỬ NHỎ NHẤT THỨ K

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
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