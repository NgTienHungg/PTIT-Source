/*
J. If( submit == wa ) cout « "tay be" ;

Cho dãy các số nguyên dương, in ra số có số lần xuất hiện nhiều nhất, nếu có nhiều số xuất hiện giống nhau in ra số xuất hiện đầu tiên trong dãy.

Input
Dòng đầu tiên chứa số nguyên dương n (n≤1e5).
Dòng thứ hai chứa n số nguyên dương ai(ai≤1e9), mỗi số cách nhau vài dấu cách.

Output
Dòng duy nhất chứa số nguyên thỏa mãn yêu cầu đề bài.

Example

input
4
2 1 1 3

output
1
*/

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
    for (int i = 0; i < v.size(); ++i)
    {
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
    v.resize(0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        int vt = Find(x);
        if (vt == -1)
        {
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