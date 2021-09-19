// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/M
// M. Smooth Number

/* M. Smooth Number */
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> f;
void smoothNumber()
{
    for (int i = 2; i <= 9; ++i) {
        for (int j = 1; j <= 10 - i; ++j) {
            string s = "";
            for (int k = 1; k <= i; ++k) {
                s = s + char((j + k - 1) + '0');
            }
            f.push_back(stoi(s));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    smoothNumber();

    int l, h;
    cin >> l >> h;
    vector<int> res;
    for (int i = 0; i < f.size(); ++i) {
        if (f[i] < l)
            continue;
        if (f[i] > h)
            break;
        res.push_back(f[i]);
    }

    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i) {
        if (i == 0)
            cout << "[";
        cout << "[" << res[i] << "]";
        if (i != res.size() - 1)
            cout << ", ";
        else
            cout << "]";
    }
    return 0;
}