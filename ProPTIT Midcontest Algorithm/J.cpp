// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/J
// J. If( submit == wa ) cout « "tay be" ;.

/* J. If( submit == wa ) cout « "tay be" ;. */
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Data
{
    int val;
    int cou;
    int pos;
};

vector<Data> v;

int Find(int x)
{
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].val == x)
            return i;
    }
    return -1;
}

bool cmp(Data a, Data b)
{
    if (a.cou > b.cou)
        return 1;
    if (a.cou == b.cou && a.pos < b.pos)
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        int vt = Find(x);
        if (vt == -1) {
            Data tmp;
            tmp.val = x;
            tmp.cou = 1;
            tmp.pos = i;
            v.push_back(tmp);
        }
        else
            v[vt].cou += 1;
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].val;
    return 0;
}