// https://code.ptit.edu.vn/student/question/CPP0445
// SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    set<int> se;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        se.insert(x);
    }
    vector<int> ve(se.begin(), se.end());
    if (ve.size() < 2) cout << "-1\n";
    else cout << ve[0] << " " << ve[1] << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}