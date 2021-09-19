// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/E
// E. Kén rể

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<long long> f;
void pretreatment()
{
    /* Lưu pow(2,i) các số < 1e18 */
    f.push_back(1);
    for (int i = 1; i <= 100; ++i) {
        if (2 * f[i - 1] > 1e18)
            return;
        f.push_back(2 * f[i - 1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    pretreatment();

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i) {
        for (int j = f.size() - 1; j >= 0; --j) {
            if (a[i] < f[j])
                continue;
            if (a[i] == f[j]) {
                cout << j + 1 << " ";
                break;
            }
            else
                a[i] %= f[j];
        }
    }
    return 0;
}