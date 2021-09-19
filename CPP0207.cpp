// https://code.ptit.edu.vn/student/question/CPP0207
// QUAY VÒNG DÃY SỐ 1

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i)
        cout << v[(i + d) % n] << " ";
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