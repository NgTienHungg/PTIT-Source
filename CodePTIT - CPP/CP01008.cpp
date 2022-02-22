// https://code.ptit.edu.vn/student/question/CP01008
// QUAY VÒNG DÃY SỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cout << a[(i + d) % n] << " ";
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