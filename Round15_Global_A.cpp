#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string temp = s;
    sort(temp.begin(), temp.end());
    int res = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (temp[i] != s[i])
            res++;
    }
    cout << res << endl;
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