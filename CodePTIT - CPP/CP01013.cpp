// https://code.ptit.edu.vn/student/question/CP01013
// SỐ ĐẦU TIÊN BỊ LẶP

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    map<int, int> mp;
    for (int i = 0; i < n; ++i)
        mp[a[i]]++;

    map<int, int>::iterator it;
    for (int i = 0; i < n; ++i)
    {
        it = mp.find(a[i]);
        if (it != mp.end() && (*it).second > 1)
        {
            cout << a[i] << endl;
            return;
        }
    }
    cout << "NO\n";
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